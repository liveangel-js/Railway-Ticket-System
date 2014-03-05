#ifndef SERVER_H
#define SERVER_H

#include "comm.h"
#include <QApplication>
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <stdio.h>
int p_request(request *rqt,int client_sockfd);
int p_get_user(request *rqt,int client_sockfd);
int p_add_user(request *rqt,int client_sockfd);
int p_update_user(request *rqt,int client_sockfd);
int p_get_tickets(request *rqt,int client_sockfd);
int p_update_ticket(request *rqt,int client_sockfd);
int p_get_orders(request *rqt,int client_sockfd);
int p_del_order(request *rqt,int client_sockfd);
int p_add_order(request *rqt,int client_sockfd);

#endif // SERVER_H
