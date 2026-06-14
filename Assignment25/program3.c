#include<stdio.h>

void Pattern(int iRow,int iCol){
    //Logic
    int i = 0;
    int j = 0;
    int iNo = 0;
    char ch = '\0';
    for(int i=1;i<=iRow;i++){
        iNo = 1;
        ch = 'a';
        for(int j=1;j<=iCol;j++){
            if(i%2==0){
                printf("%d\t",iNo);
                iNo++;
            }
            else{
                printf("%c\t",ch);
                ch++;
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