#include <stdio.h>
//Swapping two numbers using with 3rd variable or temp variable
void main() {
  int x = 5;
  int y = 10;
  int temp;
  
  printf("Before Swap : x = %d, y = %d\n", x,y);

  temp = x;
  x = y;
  y = temp;
  
  printf("Before Swap : x = %d, y = %d\n", x,y);
}