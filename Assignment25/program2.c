#include<stdio.h>

void Pattern(int iRow,int iCol){
    //Logic
    int i = 0;
    int j = 0;
    int iNo1 = 0;
    int iNo2 = 0;
    for(int i=1;i<=iRow;i++){
        iNo1 = 1;
        iNo2 = 2;
        for(int j=1;j<=iCol;j++){
            if(i%2==0){
                printf("%d\t",iNo1);
                iNo1=iNo1+2;
            }
            else{
                printf("%d\t",iNo2);
                iNo2=iNo2+2;
            }
        }
        printf("\n");
    }
}

int main(){
    int iValue1 = 0,iValue2 = 0;
    printf("Enter the number of rows and columns : ");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}