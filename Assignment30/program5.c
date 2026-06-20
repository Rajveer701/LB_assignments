#include<stdio.h>

void Display(char ch){
    printf("Decimal value : %d\n", ch);
    printf("Octal value : O%o\n", ch);
    printf("Hexadecimal value : OX%X\n", ch);
}

int main(){
    char cValue = '\0';

    printf("Enter the character : ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}