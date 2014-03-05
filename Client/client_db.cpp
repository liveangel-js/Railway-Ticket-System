#include "client_db.h"
#include <mysql/mysql.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "client.h"
#include <unistd.h>



int dbinit(){
    return clt_comm_init();
}

void dbclose(){
}

int get_user_by_no(int userno, user *u){
    request rqt;
    memset(&rqt, '\0', sizeof(request));
    rqt.pid = PID;
    rqt.u.userno = userno;
    rqt.req = r_get_user;

    if(!clt_send_request(&rqt))
        return 0;

    response rsp;
    if(!clt_get_response(&rsp))
        return 0;

    if(rsp.rs == rs_success){
        memcpy(u, &rsp.u, sizeof(user));
        return 1;
    }
    if(rsp.rs == rs_find_nothing)
        return 0;
    if(rsp.rs == rs_failure)
        return 0;

}

int get_user_by_name(char *name, user *u){
    request rqt;
    memset(&rqt, '\0', sizeof(request));
    rqt.pid = PID;
    //rqt.u.userno = userno;
    strcpy(rqt.u.name, name);
    rqt.req = r_get_user;


    if(!clt_send_request(&rqt))
{puts("clt_send_request");
        return 0;
}
    response rsp;
    if(!clt_get_response(&rsp))
{puts("clt_get_response");
        return 0;
}
    if(rsp.rs == rs_success){
        memcpy(u, &rsp.u, sizeof(user));
        return 1;
    }
    if(rsp.rs == rs_find_nothing)
{
    //puts("find nothing");
        return 0;
}
    if(rsp.rs == rs_failure)
{puts("rs_failure");
        return 0;
}

}

int add_user(const user *u){
    request rqt;
    memset(&rqt, '\0', sizeof(request));
    rqt.pid = PID;
    memcpy(&rqt.u, u, sizeof(user));
    rqt.req = r_add_user;

    if(!clt_send_request(&rqt))
        return 0;

    response rsp;
    if(!clt_get_response(&rsp))
        return 0;
    if(rsp.rs == rs_success)
        return 1;
    if(rsp.rs == rs_find_samething)
        return 0;
    if(rsp.rs == rs_failure)
        return -1;

}

int update_user(const user *u){
    request rqt;
    memset(&rqt, '\0', sizeof(request));
    rqt.pid = PID;
    memcpy(&rqt.u, u, sizeof(user));
    rqt.req = r_update_user;

    if(!clt_send_request(&rqt))
        return 0;

    response rsp;
    if(!clt_get_response(&rsp))
        return 0;
    if(rsp.rs == rs_success)
        return 1;
    return 0;

}

int get_ticket_n(const ticket *t){
}

ticket *get_tickets(const ticket *t, int *getn){
    request rqt;
    memset(&rqt, '\0', sizeof(request));
    rqt.pid = PID;
    memcpy(&rqt.t, t, sizeof(ticket));
    rqt.req = r_get_tickets;

    if(!clt_send_request(&rqt))
        return 0;

    response *rsps;
    int n;
    rsps = NULL;
    n = 0;
    if(!clt_get_responses(&rsps, &n))
        return NULL;
    if((*rsps).rs == rs_success){
        *getn = n;
        ticket *ts = (ticket *)malloc(sizeof(ticket)*n);
        memset(ts, '\0', sizeof(ticket)*n);
        int i;
        for(i=0; i<n; ++i)
            memcpy(ts+i, &(rsps+i)->t, sizeof(ticket));
        free_get_responses(rsps);
        return ts;
    }
    if((*rsps).rs == rs_find_nothing)
        return NULL;
    if((*rsps).rs == rs_failure)
        return NULL;
}

void free_get_tickets(ticket *tset){
    if(tset)
        free(tset);
}

ticket *get_orders(const user *u, int *getn){
    request rqt;
    memset(&rqt, '\0', sizeof(request));
    rqt.pid = PID;
    memcpy(&rqt.u, u, sizeof(user));
    rqt.req = r_get_orders;
    if(!clt_send_request(&rqt))
        return 0;

    response *rsps;
    int n;
    rsps = NULL;
    n = 0;
    if(!clt_get_responses(&rsps, &n))
        return NULL;
    if((*rsps).rs == rs_success){
        *getn = n;
        ticket *ts = (ticket *)malloc(sizeof(ticket)*n);
        memset(ts, '\0', sizeof(ticket)*n);
        int i;
        for(i=0; i<n; ++i)
            memcpy(ts+i, &(rsps+i)->t, sizeof(ticket));
        free_get_responses(rsps);
        return ts;
    }
    if((*rsps).rs == rs_find_nothing)
        return NULL;
    if((*rsps).rs == rs_failure)
        return NULL;
}

void free_get_orders(ticket *tset){
    if(tset)
        free(tset);
}

int update_ticket(const ticket *t){
    request rqt;
    memset(&rqt, '\0', sizeof(request));
    rqt.pid = PID;
    memcpy(&rqt.t, t, sizeof(ticket));
    rqt.req = r_update_ticket;
    if(!clt_send_request(&rqt))
        return 0;

    response rsp;
    if(!clt_get_response(&rsp))
        return 0;
    if(rsp.rs == rs_success)
        return 1;
    return 0;
}

int add_order(const user *u, const ticket *t){
    request rqt;
    memset(&rqt, '\0', sizeof(request));
    rqt.pid = PID;
    memcpy(&rqt.u, u, sizeof(user));
    memcpy(&rqt.t, t, sizeof(ticket));
    rqt.req = r_add_order;

    if(!clt_send_request(&rqt))
        return 0;

    response rsp;
    if(!clt_get_response(&rsp))
        return 0;
    if(rsp.rs == rs_success)
        return 1;
    if(rsp.rs == rs_find_samething)
        return 0;
    if(rsp.rs == rs_failure)
        return -1;
}

int del_order(const user *u, const ticket *t){
    request rqt;
    memset(&rqt, '\0', sizeof(request));
    rqt.pid = PID;
    memcpy(&rqt.u, u, sizeof(user));
    memcpy(&rqt.t, t, sizeof(ticket));
    rqt.req = r_del_order;
    if(!clt_send_request(&rqt))
        return 0;

    response rsp;
    if(!clt_get_response(&rsp))
        return 0;
    if(rsp.rs == rs_success)
        return 1;
    if(rsp.rs == rs_find_nothing)
        return 0;
    if(rsp.rs == rs_failure)
        return -1;
}

