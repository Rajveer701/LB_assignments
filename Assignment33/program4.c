#include<stdio.h>

int LastOccurence(char *str,char ch){
    int index = 0;   
    char *start = NULL;
    start = str; 
    while(*str != '\0'){
        str++;
        index++;
    }
    while(start<=str){
        if(*str == ch){
            return index;
        }
        str--;
        index--;
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

    iRet = LastOccurence(Arr,cValue);

    if(iRet == -1){
        printf("Charcter not found\n");
    }
    
    printf("Last index of character : %d\n",iRet);

    return 0;
}