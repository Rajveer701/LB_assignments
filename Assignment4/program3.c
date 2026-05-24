#include<stdio.h>

void NonFact(int iNo)
{
    int i = 0;

    if(iNo < 0){
        iNo = -iNo;
    }

    for(i = iNo; i >= 1; i--){
        if(iNo % i != 0)
        {
            printf("%d\t", i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    NonFact(iValue);

    return 0;
}