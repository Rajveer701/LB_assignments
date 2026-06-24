#include<stdio.h>

int FirstOccurence(char *str,char ch){
    int index = 0;    
    while(*str != '\0'){
        if(*str == ch){
            return index;
        }
        str++;
        index++;
    }
    return -1;
}


int main(){
    char Arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character : ");
    scanf(" %c",&cValue);  //space to start

    iRet = FirstOccurence(Arr,cValue);

    if(iRet == -1){
        printf("Charcter not found\n");
    }
    
    printf("First index of character : %d\n",iRet);

    return 0;
}