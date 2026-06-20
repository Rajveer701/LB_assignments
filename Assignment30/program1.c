#include<stdio.h>

void displayASCII(){
    int i = 0;
    printf("ASCII Value\tCharacter\n");
    printf("-------------------------\n");
    for(i=0;i<=127;i++){
        printf("%3d\t\t%c\n", i, i);
    }
}


int main(){
    displayASCII();

    return 0;
}