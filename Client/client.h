#ifndef CLIENT_H
#define CLIENT_H

#include "model.h"
#include <unistd.h>

extern user current_user;
extern pid_t PID;

int client_init();

#endif // CLIENT_H
