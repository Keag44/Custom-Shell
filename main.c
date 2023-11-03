#include "headers.h"

int main(){
    gethostname(system_name, sizeof(system_name));
    username = getlogin();
    getcwd(curr_dir, sizeof(curr_dir));
    strcpy(home_dir, curr_dir);
    strcpy(prev_dir,curr_dir);
    print_prompt();

    while(1){
        size_t num=0;
        cmdLen = getline(&cmd,&num,stdin);
        cmdLen--;
        cmd[cmdLen] = '\0';
        char*command = strtok(cmd," \n\t");
        if(command==NULL)
        {
            print_prompt();
            continue;
        }
        else if(strcmp(command,"exit")==0)
        {
            exit(0);
        }else if(strcmp(command,"pwd")==0)
        {
            pwd();
        }else if(strcmp(command,"echo")==0)
        {
            echo();
        }else if(strcmp(command,"cd")==0)
        {
            cd();
        }else if(strcmp(command,"history")==0)
        {
            history();
        }else{
            error("Invalid Command!\n");
            printf("Currently available commands are: \n cd echo pwd\n");
        }
        print_prompt();
        
    }

    return 0;
}