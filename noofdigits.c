#include <stdio.h>

void main() {
    int num;
    printf("Enter a Number: ");
    scanf("%d", &num);
    
    if(num>=0 && num<=9){
        printf("Number of digits are : 1");
    }else if(num>=10&&num<=99){
        printf("Number of digits are : 2");
    }else if(num>=100&&num<=999){
        printf("Number of digits are : 3");
    }else if(num>=1000&&num<=9999){
        printf("Number of digits are : 4");
    }else{
        printf("out of range");
    }
}
