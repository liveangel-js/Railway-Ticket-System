#include <iostream>
#include "client.h"
#include "client_ui.h"
#include "client_db.h"
user current_user={0,"a","b","c","d","e"};

pid_t PID = getpid();
int main(int argc, char *argv[])
{
    client_init();
    if(!dbinit()){
        std::cout <<"DB Error!\n";
    }else{
        std::cout <<"DB Connect!\n";
        std::cout <<"PID"<<PID<<"\n";
        std::cout<< current_user.userno<<"\n";
    }
    return ui_start(argc,argv);

}

int client_init(){
   // PID = getpid();
}
