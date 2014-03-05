#ifndef SERVER_DB_H
#define SERVER_DB_H
#include "model.h"
int dbinit();
void dbclose();

int get_user_by_no(int userno, user *u);
int get_user_by_name(char *name, user *u);
int add_user(const user *u);
int update_user(const user *u);
int get_ticket_by_no(int ticketno, ticket *t);
int get_ticket_n(const ticket *t);
ticket *get_tickets(const ticket *t, int *getn);
void free_get_tickets(ticket *tset);
int update_ticket(const ticket *t);
int add_ticket(const ticket *t);
int get_ticket_by_checi(char * ticketcheci, ticket *t);
int update_ticket_by_manage(const ticket *t);
ticket *get_orders(const user *u, int *getn);
void free_get_orders(ticket *tset);
int add_order(const user *u, const ticket *t);
int del_order(const user *u, const ticket *t);
ticket *get_place(const ticket *t, int *getn);
int update_place_by_manage(const ticket *t);
ticket *get_checi(const ticket *t,int *getn);
int update_checi_by_manage(const ticket *t);
#endif // SERVER_H
