#include<stdio.h>

double SquareMeter(int iNo){
    //Logic
    if(iNo<0){
        iNo = -iNo;
    }
    float fSqMeter = 0.0;
    fSqMeter = iNo*0.0929;

    return fSqMeter;
}

int main(){
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet: ");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);
    printf("Value in square meter is %f: ",dRet);

    return 0;
}