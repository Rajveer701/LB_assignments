#include<stdio.h>

void Display(int iNo){
    static char ch='a';

    if(iNo>0){
        printf("%c\t",ch);
        ch++;
        Display(iNo-1);
    }
}

int main(){
    int iVal = 0;

    printf("Enter number : \n");
    scanf("%d",&iVal);
    
    Display(iVal);

    return 0;
}