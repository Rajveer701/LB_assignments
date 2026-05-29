#include<stdio.h>

int CountEven(int iNo){
    //Logic
    int iSum1 = 0;
    int iSum2 = 0;
    if(iNo<0){
        iNo = -iNo;
    }
    while(iNo>0){
        int digit = iNo%10;
        if(digit%2==0){
            iSum1 = iSum1 + digit;
        } 
        else {
            iSum2 = iSum2 + digit;
        }
        iNo = iNo/10;
    }  
    return iSum1 - iSum2;
}

int main(){
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    iRet = CountEven(iValue);
    printf("%d",iRet);
    
    return 0;
}