#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
#include<sys/stat.h>

#define BUFFER_SIZE 1024

int CalculateFileSize(char FileName[]){
    struct stat sobj;

    stat(FileName,&sobj);

    return sobj.st_size;
}


int main(){
    char fName[30] = {'\0'};
    
    int iRes = 0;

    printf("Enter file name to display : \n");
    scanf("%[^'\n]s",fName);

    iRes = CalculateFileSize(fName);

    printf("File Size : %d bytes \n",iRes);

    return 0;
}