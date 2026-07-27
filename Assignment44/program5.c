#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

#define BUFFER_SIZE 1024

void WriteIntoFile(char *FileName,char text[]){
    int fd = 0;

    fd = open(FileName,O_RDWR | O_APPEND);

    if(fd == -1){
        printf("Unable to open file \n");
    }
    else{
        write(fd,text,strlen(text));

        close(fd);
    }
}


int main(){
    char fName[30] = {'\0'};
    char text[100] = {'\0'};

    printf("Enter file name to write into : \n");
    scanf("%[^'\n]s",fName);

    printf("Enter text to write into file: \n");
    scanf(" %[^'\n]s",text);

    WriteIntoFile(fName,text);

    return 0;
}