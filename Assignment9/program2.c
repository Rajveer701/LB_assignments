#include<stdio.h>

int CountOdd(int iNo){
    //Logic
    int iCnt = 0;
    if(iNo<0){
        iNo = -iNo;
    }
    while(iNo>0){
        int digit = iNo%10;
        if(digit%2!=0){
            iCnt++;
        }
        iNo = iNo/10;
    }  
    return iCnt;
}

int main(){
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    iRet = CountOdd(iValue);
    printf("Count of odd digits in the number is %d: ",iRet);

    return 0;
}