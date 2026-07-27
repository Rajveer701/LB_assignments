#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

#define BUFFER_SIZE 1024

void DisplayFileContents(char *FileName){
    int fd = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};
    int iRet = 0;

    fd = open(FileName,O_RDONLY);

    if(fd == -1){
        printf("Unable to create file\n");
    }
    while((iRet = read(fd,Buffer,sizeof(Buffer))) != 0){
        write(1,Buffer,iRet);           
        memset(Buffer,'\0',sizeof(Buffer));
    }

    close(fd);
}

int main(){
    char fName[30] = {'\0'};

    printf("Enter file name to display : \n");
    scanf(" %s",fName);

    DisplayFileContents(fName);

    return 0;
}