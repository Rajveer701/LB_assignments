#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

#define BUFFER_SIZE 1024

#define ERR_OPEN -1

int CountCharFreq(char *FileName,char Cvalue){
    char Buffer[BUFFER_SIZE] = {'\0'};

    int fd = 0,iRet = 0,iCount = 0,i = 0;

    fd = open(FileName,O_RDONLY);

    if(fd == -1){
        return ERR_OPEN;
    }

    while((iRet = read(fd,Buffer,sizeof(Buffer))) != 0){
        for(i=0;i<iRet;i++){
            if(Buffer[i]==Cvalue){
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
    char cValue = '\0';

    printf("Enter file name to display : \n");
    scanf("%[^'\n]s",fName);

    printf("Enter character : \n");
    scanf(" %c",&cValue);

    iRet = CountCharFreq(fName,cValue);

    if(iRet == ERR_OPEN){
        printf("Unable to open source file!!!\n");
    }
    else{
        printf("Frequency of %c in file : %d\n",cValue,iRet);
    }

    return 0;
}