#include<stdio.h>

typedef unsigned int UINT;

UINT CountOne(UINT iNo){
    UINT iCnt = 0;
    UINT iDigit = 0;

    while(iNo!=0){
        iDigit = iNo%2;
        iCnt += iDigit;
        iNo = iNo/2;
    }
    return iCnt;
}

int main(){
    UINT iVal = 0;
    UINT iRet = 0;
    
    printf("Enter number : ");
    scanf("%d",&iVal);

    iRet = CountOne(iVal);
    printf("Number of ON(1) bits : %d\n",iRet);

    return 0;
}