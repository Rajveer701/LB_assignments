#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength){
    int iCnt = 0;
    for(iCnt = 0;iCnt < iLength;iCnt++){
        if(Arr[iCnt] > 99 && Arr[iCnt] < 1000){
            printf("%d\t",Arr[iCnt]);
        }
    }
}

int main()
{
    int iSize = 0;
    int iCnt = 0;
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


    Digits(p, iSize);

    return 0;
}