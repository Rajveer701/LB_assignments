#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

#define BUFFER_SIZE 1024

#define ERR_OPEN -1

void DisplayN(char FileName[],int iSize){
    char Buffer[BUFFER_SIZE] = {'\0'};

    int fd = 0,iRet = 0;

    fd = open(FileName,O_RDONLY);

    if(fd == -1){
        printf("Unable to open file\n");
        return;
    }

    while((iRet = read(fd,Buffer,sizeof(Buffer))) != 0){
        if(iSize>=0){
            write(1,Buffer,iSize);
            iSize--;
        }
        memset(Buffer,'\0',sizeof(Buffer));
    }

    close(fd);
}

int main(){
    char fName[30] = {'\0'};
    int iValue = 0;

    printf("Enter file name to display : \n");
    scanf("%[^'\n]s",fName);

    printf("Enter number of characters : \n");
    scanf("%d",&iValue);

    DisplayN(fName,iValue);

    return 0;
}