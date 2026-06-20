#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkSpecial(char ch){
        if(ch>=33 && ch<=42){
            return TRUE;
        }
        else{
            return FALSE;
        }
}


int main(){
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character : ");
    scanf("%c",&cValue);

    bRet = ChkSpecial(cValue);

    if(bRet == TRUE){
        printf("It is a Special Character");
    }

    else{
        printf("It is not a Special Character");
    }

    return 0;
}
