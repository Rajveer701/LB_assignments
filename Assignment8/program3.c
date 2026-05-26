#include<stdio.h>

int KMtoMeter(int iNo){
    //Logic
    if(iNo<0){
        iNo = -iNo;
    }
    int iMeter = 0;
    iMeter = iNo*1000;

    return iMeter;
}

int main(){
    int iValue = 0;
    int iRet = 0;

    printf("Enter Distance in Km: ");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);
    printf("Value in meter is %d: ",iRet);

    return 0;
}