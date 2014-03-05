#include "server.h"
#include "mainwindow.h"
#include "daily.h"
#include "server_db.h"
#include "comm.h"
#include "model.h"
void start_server();
int main(int argc, char *argv[])
{

    if(dbinit()){

        writeRecord("数据库链接成功\n");
    }else{
        writeRecord("数据库链接失败\n");
        exit(EXIT_FAILURE);
    }
    pid_t pidd;
    pidd =fork();
    switch(pidd){
    case -1:
        exit(1);
    case 0:
    {QApplication a(argc, argv);
         MainWindow w;
         w.show();
         w.setInit();
         std::cout << "ddd\n";
         a.exec();}
        break;
    default:
        start_server();
        break;
    }



  //  ticket uuuu={0,"zx","zx","zx","zx","zx",12};
  //   add_ticket(&uuuu);





   return 0;
   //return 1;
}

void start_server(){
    writeRecord("系统启动\n");
    int server_sockfd;
    struct sockaddr_in server_address;
    server_address.sin_family = AF_INET;
    server_address.sin_addr.s_addr = inet_addr("127.0.0.1");
    server_address.sin_port = 9734;

    server_sockfd = socket(AF_INET, SOCK_STREAM, 0);
    bind(server_sockfd, (struct sockaddr *)&server_address, sizeof(server_address));
    listen(server_sockfd, 5);
    writeRecord("server start, waiting client!\n");
    while(1){
        int client_sockfd;
        struct sockaddr_in client_address;
        socklen_t client_addr_len;
        client_addr_len = sizeof(client_address);
        client_sockfd = accept(server_sockfd, (struct sockaddr *)&client_address, (socklen_t *)&client_addr_len);
        writeRecord("client connected\n");
        pid_t p;
        if((p=fork())==0){

            close(server_sockfd);
            while(1){
                request rqt;
                srv_get_request(&rqt, client_sockfd);
                printf("用户名%s 有一个请求信息\n", rqt.u.name);
                p_request(&rqt, client_sockfd);
            }
        }else if(p > 0){
            close(client_sockfd);
        }else{
        }
    }

}


int p_request(request *rqt, int client_sockfd){
    request_op req = rqt->req;
    if(req == r_get_user)
        return p_get_user(rqt, client_sockfd);
    if(req == r_add_user)
        return p_add_user(rqt, client_sockfd);
    if(req == r_update_user)
        return p_update_user(rqt, client_sockfd);
    if(req == r_get_tickets)
        return p_get_tickets(rqt, client_sockfd);
    if(req == r_get_orders)
        return p_get_orders(rqt, client_sockfd);
    if(req == r_add_order)
        return p_add_order(rqt, client_sockfd);
    if(req == r_del_order)
        return p_del_order(rqt, client_sockfd);
    return 0;
}

int p_get_user(request *rqt, int client_sockfd){
    user u;
    response rsp;
    memset(&rsp, '\0', sizeof(response));
    if(!get_user_by_name(rqt->u.name, &u))
        rsp.rs = rs_find_nothing;
    else{
        rsp.rs = rs_success;
        memcpy(&rsp.u, &u, sizeof(user));
    }

    return srv_send_response(&rsp, client_sockfd);
}

int p_add_user(request *rqt, int client_sockfd){
    response rsp;
    memset(&rsp, '\0', sizeof(response));

    if(add_user(&rqt->u))
        rsp.rs = rs_success;
    else
        rsp.rs = rs_failure;

    return srv_send_response(&rsp, client_sockfd);

}

int p_update_user(request *rqt, int client_sockfd){
    response rsp;
    memset(&rsp, '\0', sizeof(response));

    if(update_user(&rqt->u)){
        rsp.rs = rs_success;
    }else{
        rsp.rs = rs_failure;
    }
    return srv_send_response(&rsp, client_sockfd);
}

int p_get_tickets(request *rqt, int client_sockfd){
    response rsp;
    response *rsps;

    memset(&rsp, '\0', sizeof(response));
    ticket *tset;
    int getn;
    tset = get_tickets(&rqt->t, &getn);
    if(getn == -1)
        rsp.rs = rs_failure;
    else if(getn == 0){
        rsp.rs = rs_find_nothing;
        rsp.remain = 0;
    }else{
        rsps = (response *)malloc(sizeof(response)*getn);
        memset(rsps, '\0', sizeof(response)*getn);
        int i;
        for(i=0; i<getn; ++i){
            response *p;
            p = rsps + i;
            p->rs = rs_success;
            memcpy(&p->t, tset+i, sizeof(ticket));
        }
        rsps->remain = getn - 1;
    }
    free_get_tickets(tset);

    if(getn)
        return srv_send_responses(rsps, getn, client_sockfd);
    else
        return srv_send_response(&rsp, client_sockfd);
}

int p_update_ticket(request *rqt){}

int p_get_orders(request *rqt, int client_sockfd){
    response rsp;
    response *rsps;

    memset(&rsp, '\0', sizeof(response));
    ticket *tset;
    int getn;
    tset = get_orders(&rqt->u, &getn);
    if(getn == -1){
        rsp.rs = rs_failure;
        rsp.remain = 0;
    }else if(getn == 0){
        rsp.rs = rs_find_nothing;
        rsp.remain = 0;
    }else{
        rsps = (response *)malloc(sizeof(response)*getn);
        memset(rsps, '\0', sizeof(response)*getn);
        int i;
        for(i=0; i<getn; ++i){
            response *p;
            p = rsps + i;
            p->rs = rs_success;
            memcpy(&p->t, tset+i, sizeof(ticket));
        }
        rsps->remain = getn - 1;
    }
    free_get_orders(tset);

    if(getn){
        return srv_send_responses(rsps, getn, client_sockfd);
    }else{
        return srv_send_response(&rsp, client_sockfd);
    }
}

int p_del_order(request *rqt, int client_sockfd){
    response rsp;
    memset(&rsp, '\0', sizeof(response));

    if(del_order(&rqt->u, &rqt->t))
        rsp.rs = rs_success;
    else
        rsp.rs = rs_failure;

    return srv_send_response(&rsp, client_sockfd);
}

int p_add_order(request *rqt, int client_sockfd){
    response rsp;
    memset(&rsp, '\0', sizeof(response));

    if(add_order(&rqt->u, &rqt->t))
        rsp.rs = rs_success;
    else
        rsp.rs = rs_failure;

    srv_send_response(&rsp, client_sockfd);
}



