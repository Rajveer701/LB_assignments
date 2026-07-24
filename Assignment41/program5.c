#include<stdio.h>

int Mult(int iNo){
    static int iProd = 1;
    if(iNo!=0){
        iProd = iProd * (iNo%10);
        iNo = iNo/10;
        Mult(iNo);
    }
    return iProd;
}

int main(){
    int iVal,iRet=0;

    printf("Enter number : \n");
    scanf("%d",&iVal);

    iRet = Mult(iVal);

    printf("Product of digits : %d\n",iRet);

    return 0;
}