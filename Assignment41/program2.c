#include<stdio.h>

int Sum(int iNo){
    static int iSum = 0;
    if(iNo!=0){
        iSum = iSum + (iNo%10);
        iNo = iNo/10;
        Sum(iNo);
    }
    return iSum;
}

int main(){
    int iVal,iRet=0;

    printf("Enter number : \n");
    scanf("%d",&iVal);

    iRet = Sum(iVal);

    printf("Sum of digits : %d\n",iRet);

    return 0;
}