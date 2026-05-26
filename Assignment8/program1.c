#include<stdio.h>

double CircleArea(float fRadius){
    //Logic
    double PI = 3.14;
    double dArea = 0;
    dArea = PI*fRadius*fRadius;

    return dArea;
}

int main(){
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Radius: ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);
    printf("The area of the cicle is %f",dRet);

    return 0;
}