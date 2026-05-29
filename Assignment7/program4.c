#include<stdio.h>

int OddFactorial(int iNo){
    //Logic
    int iFact = 1;
    if(iNo<0){
        iNo = -iNo;
    }
    int iCnt = 0;
    for(iCnt = 1;iCnt<=iNo;iCnt=iCnt+2){
        iFact = iFact*iCnt;
    }
    return iFact;
}

int main(){
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);
    printf("Odd Factorial of the number is %d: ",iRet);
    
    return 0;
}