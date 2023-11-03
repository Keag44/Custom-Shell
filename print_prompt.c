#include "headers.h"

void print_prompt(){
    char prompt[1000];
    char*temp;
    
    temp = strstr(curr_dir, home_dir);
    strcpy(prompt, "~");
    strcat(prompt, temp+strlen(home_dir));
    printf("<%s%s%s@%s%s%s:%s%s%s> ",KYEL, username, KNRM, KGRN, system_name, KNRM, KBLU, prompt, KNRM);
}