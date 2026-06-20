#include<stdio.h>
#include <string.h>

void Reverse(char *str){
    int n = strlen(str);
    int i = 0;

    for(i=n-1;i>=0;i--){
        printf("%c", str[i]);
    }
}

int main(){
    char Arr[20];
    
    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr); 

    Reverse(Arr);

    return 0;
}