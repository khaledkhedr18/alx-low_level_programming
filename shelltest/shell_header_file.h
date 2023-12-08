#ifndef SHELL_HEADER_FILE_H
#define SHELL_HEADER_FILE_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <sys/wait.h>


void khedira_print(const char *output);
void khedira_prompt(void);
void executioner(const char *exec_comm, char const *args[]);
void khedira_user_input(char *comm, size_t size);


#endif
