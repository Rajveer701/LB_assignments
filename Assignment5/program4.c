#include<stdio.h>

void OddDisplay(int iNo){
    //Logic
    int iCnt = 0;
    
    for(iCnt = 1;iCnt<iNo;iCnt=iCnt+2){
        printf("%d\t",iCnt);
    }
}

int main(){
    int iValue = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}