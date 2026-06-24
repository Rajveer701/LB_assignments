#include <stdio.h>

void StrNCpyX(char *src,char *dest,int iCnt){
    while((*src!=0)&&(iCnt!=0)){
        *dest = *src;
        src++;
        dest++;
        iCnt--;
    }

}

int main(){
    char arr[30] = "Marvellous Multi OS";
    char brr[30];

    StrNCpyX(arr,brr,10);

    printf("Copied string : %s",brr);

    return 0;
}