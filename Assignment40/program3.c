#include<stdio.h>

void Display(int iNo){
    if(iNo>=1){
        printf("%d\t",iNo);
        iNo--;
        Display(iNo);
    }
}

int main(){
    int iVal = 0;

    printf("Enter number : \n");
    scanf("%d",&iVal);
    
    Display(iVal);

    return 0;
}