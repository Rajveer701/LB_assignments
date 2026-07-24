#include<stdio.h>

int WhiteSpace(char *str){
    static int iCnt = 0;

    if(*str != '\0'){
        if(*str == ' '){
            iCnt++;
        }
        str++;
        WhiteSpace(str);
    }

    return iCnt;
}

int main(){
    char Arr[20] = {'\0'};
    int iRet = 0;
    
    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = WhiteSpace(Arr);

    printf("No. of White Space : %d \n",iRet);

    return 0;
}