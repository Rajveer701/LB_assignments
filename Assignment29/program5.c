#include<stdio.h>

void displaySchedule(char ch){
    if(ch == 'A' || ch == 'a'){
        printf("Your exam is at 7am.\n");
    }
    else if(ch == 'B' || ch == 'b'){
        printf("Your exam is at 8.30am.\n");
    }
    else if(ch == 'C' || ch == 'c'){
        printf("Your exam is at 9.20am.\n");
    }
    else if(ch == 'D' || ch == 'd'){
        printf("Your exam is at 10.30am.\n");
    }
    else{
        printf("Enter valid division\n");
    }
}


int main(){
    char cValue = '\0';

    printf("Enter the division : ");
    scanf("%c",&cValue);

    displaySchedule(cValue);

    return 0;
}