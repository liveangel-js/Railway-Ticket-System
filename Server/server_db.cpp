#include "server_db.h"
#include <mysql/mysql.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "daily.h"
#define SQLMAX 300
MYSQL *conn;

int dbinit(){
    conn =mysql_init(NULL);
    if(!conn){
        fprintf(stderr,"mysql_init failed\n");
        return 0;
    }
    conn = mysql_real_connect(conn, "localhost", "root", "root", "tickets", 0, NULL, 0);
    if(conn){
        printf("Connection success\n");
        return 1;
    }else{
        printf("Connection failed\n");
        return 0;
    }
}

void dbclose(){
    mysql_close(conn);
    free(conn);
}

int get_user_by_no(int userno, user *u){
    char sql[SQLMAX];
    sprintf(sql, "select * from t_user where userno = %d", userno);
    writeRecord(sql);
    if(mysql_query(conn, sql))
        return -1;
    else{
        MYSQL_RES *res;
        res = mysql_store_result(conn);
        if(!res)
            return -1;

        if(!mysql_num_rows(res))
            return 0;

        MYSQL_ROW row;
        row = mysql_fetch_row(res);
        u->userno = atoi(row[0]);
        strcpy(u->name, row[1]);
        strcpy(u->passwd, row[2]);
        strcpy(u->ID, row[3]);
        strcpy(u->phone, row[4]);
        strcpy(u->email, row[5]);

        mysql_free_result(res);
        return 1;
    }
}

int get_user_by_name(char *name, user *u){
    char sql[SQLMAX];
    sprintf(sql, "select * from t_user where name = '%s'", name);
    writeRecord(sql);
    if(mysql_query(conn, sql))
        return -1;
    else{
        MYSQL_RES *res;
        res = mysql_store_result(conn);
        if(!res)
            return -1;

        if(!mysql_num_rows(res))
            return 0;

        MYSQL_ROW row;
        row = mysql_fetch_row(res);
        u->userno = atoi(row[0]);
        strcpy(u->name, row[1]);
        strcpy(u->passwd, row[2]);
        strcpy(u->ID, row[3]);
        strcpy(u->phone, row[4]);
        strcpy(u->email, row[5]);

        mysql_free_result(res);
        return 1;
    }
}

int add_user(const user *u){
    char sql[SQLMAX];
    sprintf(sql, "insert into t_user values(null, '%s', '%s', '%s', '%s', '%s')", \
    u->name, u->passwd, u->ID, u->phone, u->email);
    writeRecord("增加新用户成功！\n");
    return !mysql_query(conn, sql);

}
int add_ticket(const ticket *t){
    char sql[SQLMAX];

    sprintf(sql,"insert into t_ticket values(null,'%s','%s','%s','%s','%s',%d,'%s',%d)",t->checi, \
            t->start_place,t->finish_place,t->start_time,t->finish_time,t->price,t->date,t->remain);
    if(!mysql_query(conn, sql)){
        if(mysql_affected_rows(conn)!=0){
            writeRecord(sql);
            writeRecord("增加新车票成功！\n");
            return 1;
        }else{
            return 0;
        }
    }
    return 0;




}

int update_user(const user *u){
    char sql[SQLMAX];
    sprintf(sql, "update t_user set password='%s', phone='%s', email='%s' where userno=%d", \
    u->passwd, u->phone, u->email, u->userno);
    writeRecord(sql);

    return !mysql_query(conn, sql);
}

int get_ticket_n(const ticket *t){
    char sql[SQLMAX];
    if(*(t->checi) && *(t->finish_time)){
        sprintf(sql, "select * from t_ticket where checi='%s' and start_place='%s' \
        and finish_place='%s' and start_time='%s' and finish_time='%s'", \
        t->checi, t->start_place, t->finish_place, t->start_time, t->finish_time);
    }else if(*(t->checi)){
        sprintf(sql, "select * from t_ticket where checi='%s' and start_place='%s' \
        and finish_place='%s' and start_time='%s'", \
        t->checi, t->start_place, t->finish_place, t->start_time);
    }else if(*(t->finish_time)){
        sprintf(sql, "select * from t_ticket where start_place='%s' \
        and finish_place='%s' and start_time='%s' and finish_time='%s'", \
        t->start_place, t->finish_place, t->start_time, t->finish_time);
    }else{
        sprintf(sql, "select * from t_ticket where start_place='%s' \
        and finish_place='%s' and start_time='%s'", \
        t->start_place, t->finish_place, t->start_time);
    }
    if(mysql_query(conn, sql))
        return 0;
    MYSQL_RES *res;
    res = mysql_store_result(conn);
    if(res == NULL)
        return 0;
    int ret;
    ret = mysql_num_rows(res);
    mysql_free_result(res);
    return ret;
}
ticket *get_place(const ticket *t, int *getn){
    char sql[SQLMAX];
    sprintf(sql,"select distinct t1.start_place from t_ticket t1 union select distinct t2.finish_place from t_ticket t2");
    writeRecord(sql);
    if(mysql_query(conn, sql)){
        *getn = -1;
        return NULL;
    }
    MYSQL_RES *res;
    res = mysql_store_result(conn);
    if(res == NULL){
        *getn = -1;
        return NULL;
    }
    *getn = mysql_num_rows(res);
    ticket *tset = (ticket *)malloc(sizeof(ticket) * *getn);
    int i;
    MYSQL_ROW sqlrow;
    for(i = 0; i < *getn; ++i){
        sqlrow = mysql_fetch_row(res);
        ticket *tk;
        tk = tset+i;
        strcpy(tk->start_place, sqlrow[0]);

    }
    mysql_free_result(res);
    return tset;
}

ticket *get_checi(const ticket *t,int *getn){
    char sql[SQLMAX];
    sprintf(sql,"select distinct checi,start_place,finish_place,start_time,finish_time  from t_ticket");
    writeRecord(sql);
    if(mysql_query(conn, sql)){
        *getn = -1;
        return NULL;
    }
    MYSQL_RES *res;
    res = mysql_store_result(conn);
    if(res == NULL){
        *getn = -1;
        return NULL;
    }
    *getn = mysql_num_rows(res);
    ticket *tset = (ticket *)malloc(sizeof(ticket) * *getn);
    int i;
    MYSQL_ROW sqlrow;
    for(i = 0; i < *getn; ++i){
        sqlrow = mysql_fetch_row(res);
        ticket *tk;
        tk = tset+i;

        strcpy(tk->checi, sqlrow[0]);
        strcpy(tk->start_place, sqlrow[1]);
        strcpy(tk->finish_place, sqlrow[2]);
        strcpy(tk->start_time, sqlrow[3]);
        strcpy(tk->finish_time, sqlrow[4]);

    }
    mysql_free_result(res);
    return tset;
}

ticket *get_tickets(const ticket *t, int *getn){
    char sql[SQLMAX];
    if(t->price==0){
        //有车次无日期
        sprintf(sql,"select * from t_ticket where checi='%s'",t->checi);
    }else if(t->price==1){
        //有车次有日期
        sprintf(sql,"select * from t_ticket where checi='%s' and datetime='%s'",t->checi,t->date);
    }else if(t->price==10){
        //有发站无日期
        sprintf(sql,"select * from t_ticket where start_place='%s'",t->start_place);
    }else if(t->price==11){
        //有发站有日期
        sprintf(sql,"select * from t_ticket where start_place='%s' and datetime ='%s'",t->start_place,t->date);
    }else if(t->price==21){
        //获得所有车票信息
        sprintf(sql,"select * from t_ticket");
    }
    /*
    if(*(t->checi) && *(t->finish_time)){
        sprintf(sql, "select * from t_ticket where checi='%s' and start_place='%s' \
        and finish_place='%s' and start_time='%s' and finish_time='%s'", \
        t->checi, t->start_place, t->finish_place, t->start_time, t->finish_time);
    }else if(*(t->checi)){
        sprintf(sql, "select * from t_ticket where checi='%s' and start_place='%s' \
        and finish_place='%s' and start_time='%s'", \
        t->checi, t->start_place, t->finish_place, t->start_time);
    }else if(*(t->finish_time)){
        sprintf(sql, "select * from t_ticket where start_place='%s' \
        and finish_place='%s' and start_time='%s' and finish_time='%s'", \
        t->start_place, t->finish_place, t->start_time, t->finish_time);
    }else{
        sprintf(sql, "select * from t_ticket where start_place='%s' \
        and finish_place='%s' and start_time='%s'", \
        t->start_place, t->finish_place, t->start_time);
    }*/
    writeRecord(sql);
    if(mysql_query(conn, sql)){
        *getn = -1;
        return NULL;
    }
    MYSQL_RES *res;
    res = mysql_store_result(conn);
    if(res == NULL){
        *getn = -1;
        return NULL;
    }
    *getn = mysql_num_rows(res);
    ticket *tset = (ticket *)malloc(sizeof(ticket) * *getn);
    int i;
    MYSQL_ROW sqlrow;
    for(i = 0; i < *getn; ++i){
        sqlrow = mysql_fetch_row(res);
        ticket *tk;
        tk = tset+i;
        tk->ticketno = atoi(sqlrow[0]);
        strcpy(tk->checi, sqlrow[1]);
        strcpy(tk->start_place, sqlrow[2]);
        strcpy(tk->finish_place, sqlrow[3]);
        strcpy(tk->start_time, sqlrow[4]);
        strcpy(tk->finish_time, sqlrow[5]);
        tk->price= atoi(sqlrow[6]);
        strcpy(tk->date,sqlrow[7]);
        tk->remain = atoi(sqlrow[8]);
    }
    mysql_free_result(res);
    return tset;
}

void free_get_tickets(ticket *tset){
    if(!tset)
        free(tset);
}

int get_ticket_by_checi(char * ticketcheci, ticket *t){
    char sql[SQLMAX];
    sprintf(sql, "select * from t_ticket where checi = '%s'", ticketcheci);
    writeRecord(sql);
    char output[200];
    sprintf(output, "查询车次:%s", ticketcheci);
    writeRecord(output);
    if(mysql_query(conn,sql)){
       return -1;
    }else{
        MYSQL_RES *res;
        res = mysql_store_result(conn);
        if(!res)
            return -1;
        if(!mysql_num_rows(res))
            return 0;
        MYSQL_ROW row;
        row = mysql_fetch_row(res);
        t->ticketno = atoi(row[0]);
        strcpy(t->checi, row[1]);
        strcpy(t->start_place, row[2]);
        strcpy(t->finish_place, row[3]);
        strcpy(t->start_time, row[4]);
        strcpy(t->finish_time, row[5]);
        t->price=atoi(row[6]);
        strcpy(t->date,row[7]);
        t->remain = atoi(row[8]);

        mysql_free_result(res);
        return 1;
    }
}

int get_ticket_by_no(int ticketno, ticket *t){
    char sql[SQLMAX];
    sprintf(sql, "select * from t_ticket where ticketno = %d", ticketno);
    writeRecord(sql);
    char output[200];
    sprintf(output, "查询车票号:%d", ticketno);
    writeRecord(output);
    if(mysql_query(conn, sql))
        return -1;
    else{
        MYSQL_RES *res;
        res = mysql_store_result(conn);
        if(!res)
            return -1;

        if(!mysql_num_rows(res))
            return 0;

        MYSQL_ROW row;
        row = mysql_fetch_row(res);
        t->ticketno = atoi(row[0]);
        strcpy(t->checi, row[1]);
        strcpy(t->start_place, row[2]);
        strcpy(t->finish_place, row[3]);
        strcpy(t->start_time, row[4]);
        strcpy(t->finish_time, row[5]);
        t->price=atoi(row[6]);
        strcpy(t->date,row[7]);
        t->remain = atoi(row[8]);

        mysql_free_result(res);
        return 1;
    }
}


int update_place_by_manage(const ticket *t){
    char sql[SQLMAX];
    sprintf(sql,"update t_ticket set start_place ='%s' where start_place='%s'",t->finish_place,t->start_place);
    int i=mysql_query(conn, sql);
    char sql1[SQLMAX];
    sprintf(sql1,"update t_ticket set finish_place ='%s' where finish_place='%s'",t->finish_place,t->start_place);
    int j=mysql_query(conn,sql1);
    if(i=0||j==0){
        return 1;
    }else{
        return 0;
    }
}

int update_checi_by_manage(const ticket *t){
    char sql[SQLMAX];
    sprintf(sql, "update t_ticket set start_place ='%s', finish_place='%s',start_time ='%s',finish_time='%s' where checi='%s'",\
            t->start_place,t->finish_place,t->start_time,t->finish_time,t->checi);
    writeRecord(sql);
    if(!mysql_query(conn, sql)){
        if(mysql_affected_rows(conn)==0){
             return 0;
        }else{
            return 1;
        }

    }else{
        return 0;
    }
}

int update_ticket_by_manage(const ticket *t){
    char sql[SQLMAX];
    sprintf(sql, "update t_ticket set datetime ='%s', remain=%d,price =%d where ticketno=%d and checi='%s'",\
            t->date,t->remain,t->price,t->ticketno,t->checi);
    writeRecord(sql);
    if(!mysql_query(conn, sql)){
        if(mysql_affected_rows(conn)==0){
             return 0;
        }else{
            return 1;
        }

    }else{
        return 0;
    }

}

int update_ticket(const ticket *t){
    char sql[SQLMAX];
    sprintf(sql, "update t_ticket set remain=%d where ticketno=%d", \
    t->remain, t->ticketno);
    writeRecord(sql);
    return !mysql_query(conn, sql);
}

ticket *get_orders(const user *u, int *getn){
    char sql[SQLMAX];
    sprintf(sql, "select t.ticketno, t.checi, t.start_place, t.finish_place, t.start_time, t.finish_time, t.price, t.datetime, t.remain from t_ticket t, t_order o where t.ticketno = o.ticketno and o.userno = %d", u->userno);
    writeRecord(sql);
    if(mysql_query(conn, sql)){
        *getn = -1;
        return NULL;
    }
    MYSQL_RES *res;
    res = mysql_store_result(conn);
    if(res == NULL){
        *getn = -1;
        return NULL;
    }
    *getn = mysql_num_rows(res);
    ticket *tset = (ticket *)malloc(sizeof(ticket) * *getn);
    int i;
    MYSQL_ROW sqlrow;
    for(i = 0; i < *getn; ++i){
        sqlrow = mysql_fetch_row(res);
        ticket *t;
        t = tset+i;
        t->ticketno = atoi(sqlrow[0]);
        strcpy(t->checi, sqlrow[1]);
        strcpy(t->start_place, sqlrow[2]);
        strcpy(t->finish_place, sqlrow[3]);
        strcpy(t->start_time, sqlrow[4]);
        strcpy(t->finish_time, sqlrow[5]);
        t->price=atoi(sqlrow[6]);
        strcpy(t->date,sqlrow[7]);
        t->remain = atoi(sqlrow[8]);
    }
    mysql_free_result(res);
    return tset;
}

void free_get_orders(ticket *tset){
    if(tset)
        free(tset);
}

int add_order(const user *u, const ticket *t){
    ticket tkt;
    if(!get_ticket_by_no(t->ticketno, &tkt))
        return 0;
    else{
        if(tkt.remain){
            printf("购买车票号：%d 车次：%s\n", tkt.ticketno, tkt.checi);
            printf("剩余票量：%d\n", tkt.remain);
            --(tkt.remain);
            if(!update_ticket(&tkt)){
                return 0;
            }
        }else{
            return 0;
        }
    }
    char sql[SQLMAX];
    sprintf(sql, "insert into t_order values(null, '%d','%d')", \
    u->userno, t->ticketno);
    writeRecord(sql);
    if(mysql_query(conn, sql)){
        ++(tkt.remain);
        update_ticket(&tkt);
        return 0;
    }else{
        return 1;
    }
}

int del_order(const user *u, const ticket *t){
    char sql[SQLMAX];
    sprintf(sql, "delete from t_order where userno=%d and ticketno=%d", \
    u->userno, t->ticketno);
    writeRecord(sql);
    if(mysql_query(conn, sql)){
        return 0;
    }else{
        printf("affected rows: \n");
        if(mysql_affected_rows(conn)==0){

            return 0;
        }
        ticket tkt;
        get_ticket_by_no(t->ticketno, &tkt);
        ++tkt.remain;
        if(!update_ticket(&tkt))
            return 0;
    }
    return 1;
}
