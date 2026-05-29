#include<stdio.h>

int MultDigits(int iNo){
    //Logic
    int iProduct = 1;
    if(iNo<0){
        iNo = -iNo;
    }
    while(iNo>0){
        int digit = iNo%10;
        iProduct = iProduct * digit;
        iNo = iNo/10;
    }  
    return iProduct;
}

int main(){
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);
    printf("Product of digits in the number is %d: ",iRet);

    return 0;
}