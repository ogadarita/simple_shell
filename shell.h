#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

void disPrompt(void);
void execCmd(const char *my_cmd);
void myPrintFunc(const char *promptMsg);
void get_user_input(char *my_cmd, size_t size);

#endif
