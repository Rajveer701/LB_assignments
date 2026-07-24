#include<stdio.h>

int Fact(int iNo){
    static int iFact = 1;
    if(iNo!=0){
        iFact = iFact*iNo;
        Fact(--iNo);
    }
    return iFact;
}

int main(){
    int iVal=0,iRet=0;

    printf("Enter number : \n");
    scanf("%d",&iVal);

    iRet = Fact(iVal);
    printf("Factorial : %d\n",iRet);
    
    return 0;
}