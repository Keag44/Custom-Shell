#include "headers.h"

void pwd(){
    char prompt[1000];
    strcpy(prompt, curr_dir);
    printf("%s\n",prompt);
}