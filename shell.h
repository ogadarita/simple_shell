#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <sys/wait.h>

void disPrompt(void);
char **parse_input(char *input);
void execCmd(const char *my_cmd);
void myPrintFunc(const char *promptMsg);
void get_user_input(char *my_cmd, size_t size);

#endif
