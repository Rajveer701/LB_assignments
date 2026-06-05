#include<stdio.h>
#include<stdlib.h>

int FirstOcurence(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    for(iCnt = 0;iCnt<iLength;iCnt++){
        if(Arr[iCnt]==iNo){
            return iCnt;
        }
    }
    return -1;
}

int main()
{
    int iSize = 0;
    int iRet = 0;
    int iCnt = 0;
    int iValue = 0;
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

    printf("Enter the element to search \n");
    scanf("%d",&iValue);

    iRet = FirstOcurence(p, iSize,iValue);

    if(iRet == -1){
        printf("Number does not occur in this array");
    }
    else{
        printf("First Occurence : %d",iRet);
    }

    return 0;
}