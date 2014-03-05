#ifndef MODEL_H
#define MODEL_H

#include <stddef.h>
#include <unistd.h>


typedef struct{
    int userno;
    char name[30];
    char passwd[20];
    char ID[20];
    char phone[20];
    char email[20];
}user;

typedef struct{
    int ticketno;
    char checi[20];
    char start_place[20];
    char finish_place[20];
    char start_time[20];
    char finish_time[20];
    int price;
    char date[20];
    size_t remain;
}ticket;

typedef struct{
    int orderno;
    int userno;
    int ticketno;
}order;


#endif
