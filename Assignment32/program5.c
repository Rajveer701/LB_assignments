#include<stdio.h>

int DisplayDigit(char *str){
    int iCount = 0;
    while(*str != '\0'){
        if(*str==' '){
            iCount++;
        }
        str++;  
    }
    return iCount;
}

int main(){
    char arr[20];
    int iRet = 0;

    printf("Enter String: ");
    scanf("%[^'\n']s",arr);

    iRet = DisplayDigit(arr);

    printf("Count of white spaces : %d",iRet);

    return 0;
}