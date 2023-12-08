#ifndef SHELL_HEADERRR_H
#define SHELL_HEADERRR_H

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdbool.h>
#include <sys/types.h>
#include <sys/wait.h>

void khedira(const char *output);
void khedira_uinput(char *comm, size_t size_t);
void khedira_prmpt();
void execute_command(const char *exec_comm, char *const exec_args[]);


#endif