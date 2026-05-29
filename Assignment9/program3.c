#include<stdio.h>

int CountRange(int iNo){
    //Logic
    int iCnt = 0;
    if(iNo<0){
        iNo = -iNo;
    }
    while(iNo>0){
        int digit = iNo%10;
        if(digit>3 && digit<7){
            iCnt++;
        }
        iNo = iNo/10;
    }  
    return iCnt;
}

int main(){
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    iRet = CountRange(iValue);
    printf("Count of b/w 3 & 7 is %d: ",iRet);
    
    return 0;
}