/*
ij
11 12 13 14 
21 22 23 24
31 32 33 34
41 42 43 44 
1       2       3       4
        2       3       4
                3       4
                        4
*/
#include<stdio.h>

void Pattern(int iRow,int iCol){
    //Logic
    int i = 0;
    int j = 0;
    for(int i=1;i<=iRow;i++){
        for(int j=1;j<i;j++){
            printf(" \t");
        }
        for(int j=i;j<=iCol;j++){
            printf("%d\t",j);
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