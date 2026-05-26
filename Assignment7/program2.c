#include<stdio.h>

int DollarToInr(int iNo){
    //Logic
    if(iNo<0){
        iNo = -iNo;
    }
    int iUSD = 0;
    iUSD = iNo*70;

    return iUSD;
}

int main(){
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number in USD: ");
    scanf("%d",&iValue);

    iRet = DollarToInr(iValue);
    printf("Value in INR is %d: ",iRet);

    return 0;
}