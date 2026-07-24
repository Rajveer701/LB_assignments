#include<stdio.h>

int Max(int iNo){
    static int maxi=0;

    if(iNo!=0){
        int iDigit = iNo%10;
        if(iDigit > maxi){
            maxi = iDigit;
        }
        iNo = iNo/10;
        Max(iNo);
    }

    return maxi;
}

int main(){
    int iVal=0,iRet = 0;
    
    printf("Enter number : \n");
    scanf("%d",&iVal);

    iRet = Max(iVal);

    printf("Largest Digit : %d \n",iRet);

    return 0;
}