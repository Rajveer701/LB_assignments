#include<stdio.h>

void Display(int iNo){
    //Logic
    int iCnt = 0;
    
    for(iCnt = -iNo;iCnt<=iNo;iCnt++){
        printf("%d\t",iCnt);
    }
}

int main(){
    int iValue = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}