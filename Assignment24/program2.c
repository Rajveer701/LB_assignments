#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    for(i = 1; i <= iRow; i++){
        char chCap = 'A';
        char chSmall = 'a';
        for(j = 1; j <= iCol; j++){
            if(i%2==0){
                printf("%c\t", chSmall);
                chSmall++;
            }
            else{
                printf("%c\t", chCap);
                chCap++;
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