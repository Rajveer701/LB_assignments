#include<stdio.h>

int Difference(char *str){
    int iCap = 0;
    int iSmall = 0;

    while(*str != '\0'){
        if(*str>='a' && *str<='z'){
            iSmall++;
        }
        if(*str>='A' && *str<='Z'){
            iCap++;
        }
        str++;  
    }
    return (iSmall-iCap);
}

int main(){
    char arr[20];
    int iRet = 0;

    printf("Enter the string : ");
    scanf("%[^'\n']s",arr);

    iRet = Difference(arr);
    printf("Difference bw frequencies is : %d\n",iRet);

    return 0;
}