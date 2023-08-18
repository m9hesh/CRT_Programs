#include <stdio.h>

void main() {
    int ans,marks=0;
    printf("Choose one option from following\n");
    printf("In ODI how many over there :\n 1.20\n 2.30\n 3.50\n 4.60\n Enter your ans :");
    scanf("%d", &ans);
    if(ans==3){
        marks=5;
    }
    printf("Choose one option from following\n");
    printf("What is the correct age to vote :\n 1.20\n 2.18\n 3.50\n 4.60\n Enter your ans :");
    scanf("%d", &ans);
    if(ans==2){
        marks+=5;
    }
    if(marks>5){
        printf("Your Marks are :%d", marks);
        printf("You Passed");
    }else{
        printf("Better Luck Next Time");
    }
}
