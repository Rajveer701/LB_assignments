#include<stdio.h>

int CntSmall(char *str){
    static int iCnt = 0;

    if(*str != '\0'){
        if(*str>='a' && *str<='z'){
            iCnt++;
        }
        str++;
        CntSmall(str);
    }

    return iCnt;
}

int main(){
    char Arr[20] = {'\0'};
    int iRet = 0;
    
    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = CntSmall(Arr);

    printf("No. of small chars : %d \n",iRet);

    return 0;
}