#include<stdio.h>

void Display(int iNo){
    
    //updater
    while(iNo){
        printf("*");
        iNo--;
    }
}

int main(){
    int iValue = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}