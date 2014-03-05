#include "comm.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

int sockfd;
int clt_comm_init(){
    struct sockaddr_in address;
    address.sin_family = AF_INET;
    address.sin_addr.s_addr = inet_addr("127.0.0.1");
    address.sin_port = 9734;

    sockfd = socket(AF_INET, SOCK_STREAM, 0);

    if(sockfd >= 0)
        return connect(sockfd, (struct sockaddr *)&address, sizeof(address)) == 0;

    return 0;
}

int clt_send_request(const request *rqt){
    return write(sockfd, rqt, sizeof(request)) == sizeof(request);
}

int clt_get_response(response *rsp){
    return read(sockfd, rsp, sizeof(response)) == sizeof(response);
}

int clt_get_responses(response **rsp, int *getn){
    response geter[RSPESMAX];
    memset(geter, '\0', sizeof(geter));

    if(read(sockfd, geter, sizeof(response))!=sizeof(response)){
        return 0;
    }else{
        int i, n;
        for(i=0, n=geter->remain; i < n && i<RSPESMAX-1; ++i){
            read(sockfd, geter+i+1, sizeof(response));
        }
    }
    *getn = geter->remain+1;
    response *rspes = (response *)malloc((geter->remain+1)*sizeof(response));
    memcpy(rspes, geter, *getn*sizeof(response));
    *rsp = rspes;
    return 1;
}

void free_get_responses(response *rsps){
    if(rsps)
        free(rsps);
}

int srv_get_request(request *rqt, int client_sockfd){
    return read(client_sockfd, rqt, sizeof(request))==sizeof(request);
}

int srv_send_response(const response *rsp, int client_sockfd){
    return sizeof(response) == write(client_sockfd, rsp, sizeof(response));
}

int srv_send_responses(const response *rsps, size_t rsps_n, int client_sockfd){
    return sizeof(response)*rsps_n == write(client_sockfd, rsps, sizeof(response)*rsps_n);
}
