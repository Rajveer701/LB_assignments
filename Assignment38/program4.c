#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool ChkBit(UINT iNo,UINT iPos1,UINT iPos2){
    UINT iMask1 = 0x1;
    UINT iMask2 = 0x1;

    iMask1 = iMask1 << (iPos1-1);
    iMask2 = iMask2 << (iPos2-1);

    if(iMask1 == (iNo & iMask1) || iMask2 == (iNo & iMask2)){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    UINT iVal = 0;
    UINT iPos1 = 0;
    UINT iPos2 = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&iVal);

    printf("Enter 1st position : \n");
    scanf("%d",&iPos1);

    printf("Enter 2nd position : \n");
    scanf("%d",&iPos2);

    bRet = ChkBit(iVal,iPos1,iPos2);

    if(bRet==true){
        printf("Bits are ON \n");
    }
    else{
        printf("Bits are OFF \n");
    }

    return 0;
}