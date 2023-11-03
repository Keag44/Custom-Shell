#ifndef HEADERS_H
#define HEADERS_H

#define KNRM  "\x1B[0m"
#define KRED  "\x1B[1;31m"
#define KGRN  "\x1B[1;32m"
#define KYEL  "\x1B[1;33m"
#define KBLU  "\x1B[1;34m"
#define KMAG  "\x1B[1;35m"
#define KCYN  "\x1B[1;36m"
#define KWHT  "\x1B[1;37m"

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<ctype.h>

typedef long long int ll;

char system_name[1000];
char*username;
char curr_dir[1000];
char prev_dir[1000];
char home_dir[1000];
char*cmd;
ll cmdLen;

void print_prompt();
void pwd();
void echo();
void cd();
void history();
void error(char* str);
#endif