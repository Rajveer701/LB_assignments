#include<stdio.h>

int Factorial(int iNo){
    //Logic
    
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