#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

void CreateFile(char *FileName){
    int fd = 0;

    fd = creat(FileName,0777);

    if(fd == -1){
        printf("Unable to create file\n");
    }
    else{
        printf("File created successfully with fd : %d\n",fd);
    }
}

int main(){
    char fName[30] = {'\0'};

    printf("Enter file name to create : \n");
    scanf(" %s",fName);

    CreateFile(fName);

    return 0;
}