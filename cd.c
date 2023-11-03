#include "headers.h"

void cd(){
    cmd+=3;

    char* dir = strtok(cmd," \n");
    
    if(strtok(NULL," \n")!=NULL)
    {
        printf("Only one argument allowed!\n");
    }else if(dir==NULL || strcmp(dir,"~")==0)
    {
        strcpy(prev_dir,curr_dir);
        chdir(home_dir);
        getcwd(curr_dir, sizeof(curr_dir));        
    }else if(strcmp(curr_dir,home_dir)==0 && strcmp(dir,"..")==0){
        printf("Cannot go below home directory\n");
    }else if(strcmp(dir,"-")==0){
        chdir(prev_dir);
        getcwd(curr_dir, sizeof(curr_dir));
    }
    else if(chdir(dir)!=0)
    {
        printf("Invalid directory\n");
    }else{
        strcpy(prev_dir,curr_dir);    
        getcwd(curr_dir, sizeof(curr_dir));
    }
}