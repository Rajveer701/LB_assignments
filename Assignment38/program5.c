#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBitRange(UINT iNo,int iStart,int iEnd){
    UINT iMask = 0x1;
    UINT iAns = 0;
    
    iMask = ((1 << (iEnd - iStart + 1)) - 1);
    iMask = iMask << (iStart - 1);

    iAns = iNo ^ iMask;

    return iAns;
}

int main(){
    UINT iVal = 0;
    int iStart= 0;
    int iEnd= 0;
    UINT iRet = 0;
    
    printf("Enter number : ");
    scanf("%d",&iVal);

    printf("Enter starting position : ");
    scanf("%d",&iStart);

    printf("Enter end position : ");
    scanf("%d",&iEnd);

    iRet = ToggleBitRange(iVal,iStart,iEnd);
    printf("Updated number : %d\n",iRet);

    return 0;
}