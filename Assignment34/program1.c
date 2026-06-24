#include <stdio.h>

void StrCpyX(char *src,char *dest){
    while(*src!=0){
        *dest = *src;
        src++;
        dest++;
    }

}

int main(){
    char arr[30] = "Marvellous Multi OS";
    char brr[30];

    StrCpyX(arr,brr);

    printf("Copied string : %s",brr);

    return 0;
}