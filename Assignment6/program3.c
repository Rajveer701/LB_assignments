#include<stdio.h>

int Factorial(int iNo){
    //Logic
    int iFact = 1;
    if(iNo<0){
        iNo = -iNo;
    }
    int iCnt = 0;
    for(iCnt = 1;iCnt<=iNo;iCnt++){
        iFact = iFact*iCnt;
    }
    return iFact;
}

int main(){
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    printf("Factorial of the number is %d: ",iRet);
    
    return 0;
}