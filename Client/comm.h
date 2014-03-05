#ifndef COMM_H
#define COMM_H

#include "model.h"
#include <unistd.h>

typedef enum{
    r_get_user,
    r_add_user,
    r_update_user,
    r_get_tickets,
    r_update_ticket,
    r_get_orders,
    r_add_order,
    r_del_order
}request_op;

typedef enum{
    rs_success,
    rs_failure,
    rs_find_nothing,
    rs_find_samething
}response_rs;

typedef struct{
    pid_t pid;
    request_op req;
    user u;
    ticket t;
    order o;
}request;

typedef struct{
    response_rs rs;
    user u;
    ticket t;
    order o;
    int remain;
}response;

int clt_comm_init();
int clt_connect_to_srv();
int clt_send_request(const request *rqt);
int clt_get_response(response *rsp);
#define RSPESMAX 30
int clt_get_responses(response **rsp, int *getn);
void free_get_responses(response *rsps);

int srv_get_request(request *rqt, int client_sockfd);
int srv_send_response(const response *rsp, int client_sockfd);
int srv_send_responses(const response *rsps, size_t rsps_n, int client_sockfd);

#endif
