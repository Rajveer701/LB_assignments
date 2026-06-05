#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength,int iNo){
    int iFreq = 0;
    int iCnt = 0;
    for(iCnt = 0;iCnt<iLength;iCnt++){
        if(Arr[iCnt]==iNo){
            iFreq++;
        }
    }
    return iFreq;
}

int main()
{
    int iSize = 0;
    int iRet = 0;
    int iCnt = 0;
    int *p = NULL;
    int iValue = 0;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    p = (int*)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements:\n", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d: ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    iRet = Frequency(p, iSize,iValue);

    printf("Result is %d\n", iRet);

    free(p);

    return 0;
}