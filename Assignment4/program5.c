#include<stdio.h>

int FactDiff(int iNo)
{
    int i = 0;
    int sum1 = 0;
    int sum2 = 0;

    if(iNo < 0){
        iNo = -iNo;
    }

    for(i = 1; i <iNo; i++){
        if(iNo % i == 0)
        {
            sum1 = sum1+i;
        }
        else
        {
            sum2 = sum2+i;
        }
    }
    return sum1-sum2;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);
    printf("%d",iRet);

    return 0;
}