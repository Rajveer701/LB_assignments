#include<stdio.h>

void strlwlx(char *str){
    while(*str != '\0'){
        if(*str>='A' && *str<='Z'){
            *str = *str + 32;
        }
        str++;  
    }
}

int main(){
    char arr[20];

    printf("Enter String: ");
    scanf("%[^'\n']s",arr);

    strlwlx(arr);

    printf("Modified String : %s",arr);

    return 0;
}