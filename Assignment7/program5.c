#include<stdio.h>

int FactorialDiff(int iNo){
    //Logic
    int iFactEven = 1;
    int iFactOdd = 1;
    if(iNo<0){
        iNo = -iNo;
    }
    int iCnt = 0;
    for(iCnt = 2;iCnt<=iNo;iCnt=iCnt+2){
        iFactEven = iFactEven*iCnt;
    }
    for(iCnt = 1;iCnt<=iNo;iCnt=iCnt+2){
        iFactOdd = iFactOdd*iCnt;
    }
    return (iFactEven - iFactOdd);
}

int main(){
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);
    printf("Factorial Difference of the number is %d: ",iRet);
    
    return 0;
}