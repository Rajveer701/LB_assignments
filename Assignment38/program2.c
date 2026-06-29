#include<stdio.h>

typedef unsigned int UINT;

void CommonBits(UINT iNo1,UINT iNo2){
    UINT iCnt1 = 0;
    UINT iCnt2 = 0;
    UINT iDigit = 0;

    while(iNo1!=0){
        iDigit = iNo1%2;
        iCnt1 += iDigit;
        iNo1 = iNo1/2;
    }

    while(iNo2!=0){
        iDigit = iNo2%2;
        iCnt2 += iDigit;
        iNo2 = iNo2/2;
    }
    printf("Common ON Bits in 1st number : %d\n",iCnt1);
    printf("Common ON Bits in 2nd number : %d\n",iCnt2);
}

int main(){
    UINT iVal1 = 0;
    UINT iVal2 = 0;
    
    printf("Enter 1st number : ");
    scanf("%d",&iVal1);

    printf("Enter 2nd number : ");
    scanf("%d",&iVal2);

    CommonBits(iVal1,iVal2);

    return 0;
}