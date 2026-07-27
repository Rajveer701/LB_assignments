#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

void OpenFile(char *FileName){
    int fd = 0;

    fd = open(FileName,O_RDWR);

    if(fd == -1){
        printf("Unable to open file\n");
    }
    else{
        printf("File opened successfully with fd : %d\n",fd);

        close(fd);
    }
}

int main(){
    char fName[30] = {'\0'};

    printf("Enter file name to open : \n");
    scanf(" %s",fName);

    OpenFile(fName);

    return 0;
}