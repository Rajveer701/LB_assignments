#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[], int iLength, int iStart,int iEnd){
    int iCnt = 0;
    for(iCnt = 0;iCnt < iLength;iCnt++){
        if(Arr[iCnt] > iStart  && Arr[iCnt] < iEnd){
            printf("%d\t",Arr[iCnt]);
        }
    }
}

int main()
{
    int iSize = 0;
    int iCnt = 0;
    int iValue1 = 0,iValue2=0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    p = (int*)malloc(iSize * sizeof(int));

    if(p == NULL){
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements:\n", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++){
        printf("Enter element %d: ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    printf("Enter the starting point \n");
    scanf("%d",&iValue1);

    printf("Enter the ending point \n");
    scanf("%d",&iValue2);

    Range(p, iSize,iValue1,iValue2);

    return 0;
}