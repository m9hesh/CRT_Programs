#include <stdio.h>
//Swapping two numbers using without 3rd variable or temp variable
void main() {
  int x = 5;
  int y = 10;
  
  printf("Before Swap : x = %d, y = %d\n", x,y);

  x = x+y;
  y = x-y;
  x = x-y;
  
  printf("Before Swap : x = %d, y = %d\n", x,y);
}
