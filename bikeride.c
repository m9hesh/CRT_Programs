#include <stdio.h>

void main() {
    int km, total;
    printf("Enter Km :");
    scanf("%d", &km);
    if(km>=1 && km<=10){
        printf("You have to pay 20rs");
    }else if(km>10 && km<=20){
        total=20+(km-10)*3;
        printf("Your fair is :%d", total);
    }else if(km>20 && km<=50){
        total=20+30+(km-20)*5;
        printf("Your fair is :%d", total);
    }else if(km>50 && km<=100){
        total=20+30+150+(km-50)*7;
        printf("Your fair is :%d", total);
    }else{
        printf("Not accepting Rides");
    }
}
