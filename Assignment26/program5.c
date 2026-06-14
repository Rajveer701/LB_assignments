/*
1       2       3       4
1       *       *       4
1       *       *       4
1       2       3       4
*/
#include<stdio.h>

void Pattern(int iRow,int iCol){
    //Logic
    int i = 0;
    int j = 0;
    for(int i=1;i<=iRow;i++){
        for(int j=1;j<=iCol;j++){
            if(i==1 || i==iRow || j==1 || j==iCol){
                printf("%d\t",j);
            }
            else{
                printf("*\t");
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