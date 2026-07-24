#include<stdio.h>

int Strlen(char *str){
    static int iCnt = 0;

    if(*str != '\0'){
        iCnt++;
        str++;
        Strlen(str);
    }

    return iCnt;
}

int main(){
    char Arr[20] = {'\0'};
    int iRet = 0;
    
    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = Strlen(Arr);

    printf("Length of string : %d \n",iRet);

    return 0;
}