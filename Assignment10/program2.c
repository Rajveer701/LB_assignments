#include<stdio.h>

double RectArea(float fWidth,float fHeight){
    //Logic
    
    double dArea = 0;
    dArea = fWidth*fHeight;

    return dArea;
}

int main(){
    float fValue1 = 0.0;
    float fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter Width: ");
    scanf("%f",&fValue1);

    printf("Enter Height: ");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);
    printf("The area of the cicle is %f",dRet);

    return 0;
}