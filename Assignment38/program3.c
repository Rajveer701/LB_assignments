#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool ChkBit(UINT iNo){
    UINT iMask1 = 0x800;
    UINT iMask2 = 0x100;

    if(iMask1 == (iNo & iMask1) || iMask2 == (iNo & iMask2)){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    UINT iVal = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&iVal);

    bRet = ChkBit(iVal);

    if(bRet==true){
        printf("9th and 12th bits are ON \n");
    }
    else{
        printf("Bits are OFF \n");
    }

    return 0;
}