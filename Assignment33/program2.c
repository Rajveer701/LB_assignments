#include<stdio.h>

int CountChar(char *str,char ch){
    int iCount = 0;
    while(*str != '\0'){
        if(*str == ch){
            iCount++;
        }
        str++;
    }
    return iCount;
}


int main(){
    char Arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character : ");
    scanf(" %c",&cValue);  //space to start

    iRet = CountChar(Arr,cValue);
    
    printf("Character Frequency : %d\n",iRet);

    return 0;
}