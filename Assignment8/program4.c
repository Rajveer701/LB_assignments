#include<stdio.h>

double FhToCs(double fTemp)
{
    double dTemp = 0;

    dTemp = (fTemp - 32) * (5.0 / 9.0);

    return dTemp;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Temperature in Fahrenheit : ");
    scanf("%f", &fValue);

    dRet = FhToCs(fValue);

    printf("Temperature in Celsius is : %lf\n", dRet);

    return 0;
}