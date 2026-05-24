#include<stdio.h>

void Display(int iNo,int iFrequency){
    for(int i=0;i<iFrequency;i++){
        printf("%d",iNo);
    }
}

int main(){
    int iValue = 0;
    int iCnt = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    printf("Enter Frequency: ");
    scanf("%d",&iCnt);

    Display(iValue,iCnt);

    return 0;
}