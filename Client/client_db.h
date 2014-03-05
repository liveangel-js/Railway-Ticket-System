#ifndef CLIENT_DB_H
#define CLIENT_DB_H

#include "model.h"
#include "comm.h"

int dbinit();
void dbclose();

int get_user_by_no(int userno, user *u);
int get_user_by_name(char *username, user *u);
int add_user(const user *u);
int update_user(const user *u);

int get_ticket_n(const ticket *t);
ticket *get_tickets(const ticket *t, int *getn);
void free_get_tickets(ticket *tset);
int update_ticket(const ticket *t);
int get_ticket_by_no(int ticketno, ticket *t);

int add_order(const user *u, const ticket *t);
int del_order(const user *u, const ticket *t);
ticket *get_orders(const user *u, int *getn);
void free_get_orders(ticket *tset);

int clt_send_request(const request *rqt);
int clt_get_response(response *rsp);
#endif
