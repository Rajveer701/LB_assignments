#include<stdio.h>

int MultFact(int iNo){
   //Logic
    int sum = 1;

   while(iNo>0){
        int digit = iNo%10;
        sum = sum*digit;
        iNo = iNo/10;
   }
   return sum;
}

int main(){
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);
    printf("%d",iRet);

    return 0;
}
