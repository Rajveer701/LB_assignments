#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

#define BUFFER_SIZE 1024

#define ERR_OPEN -1

int CountWhiteSpaces(char *FileName){
    char Buffer[BUFFER_SIZE] = {'\0'};

    int fd = 0,iRet = 0,iCount = 0,i = 0;

    fd = open(FileName,O_RDONLY);

    if(fd == -1){
        return ERR_OPEN;
    }

    while((iRet = read(fd,Buffer,sizeof(Buffer))) != 0){
        for(i=0;i<iRet;i++){
            if(Buffer[i]==' '){
                iCount++;
            }
        }
        memset(Buffer,'\0',sizeof(Buffer));
    }

    return iCount;
}

int main(){
    char fName[30] = {'\0'};
    int iRet = 0;

    printf("Enter file name to display : \n");
    scanf("%[^'\n]s",fName);

    iRet = CountWhiteSpaces(fName);

    if(iRet == ERR_OPEN){
        printf("Unable to open source file!!!\n");
    }
    else{
        printf("Number of White spaces in file : %d\n",iRet);
    }

    return 0;
}