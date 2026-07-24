#include<stdio.h>

int Min(int iNo){
    static int mini=10;

    if(iNo!=0){
        int iDigit = iNo%10;
        if(iDigit < mini){
            mini = iDigit;
        }
        iNo = iNo/10;
        Min(iNo);
    }

    return mini;
}

int main(){
    int iVal=0,iRet = 0;
    
    printf("Enter number : \n");
    scanf("%d",&iVal);

    iRet = Min(iVal);

    printf("Smallest Digit : %d \n",iRet);

    return 0;
}