#include<stdio.h>

int SumNonFact(int iNo)
{
    int i = 0;
    int sum = 0;

    if(iNo < 0){
        iNo = -iNo;
    }

    for(i = iNo; i >= 1; i--){
        if(iNo % i != 0)
        {
            sum = sum+i;
        }
    }
    return sum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    iRet = SumNonFact(iValue);
    printf("%d",iRet);

    return 0;
}