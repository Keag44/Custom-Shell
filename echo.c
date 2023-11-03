#include "headers.h"

void echo(){
    int doublequotes = 0;
    int singlequotes = 0;
    int ptr = cmdLen-5;
    cmd+=5;
    while(*cmd==' ' && ptr>0)
    {
        // printf("d");
        cmd++;
        ptr--;
    }
    while(ptr>0)
    {
        if(*cmd=='"')
        {
            doublequotes = 1;
            while(ptr>0 && doublequotes==1)
            {
                ptr--;
                cmd++;
                if(*cmd!='"')
                {
                    printf("%c",*cmd);
                }else doublequotes = 0;
                
            }
        }else if(*cmd=='\'')
        {
            singlequotes = 1;
            while(ptr>0 && singlequotes==1)
            {
                ptr--;
                cmd++;
                if(*cmd!='\'')
                {
                    printf("%c",*cmd);
                }else singlequotes = 0;
                
            }
        }else if(*cmd!=' ')
        {
            printf("%c",*cmd);
        }else if(*(cmd-1)!=' ')
        {
            printf(" ");
        }
        cmd++;
        ptr--;
    }
    printf("\n");
}