#include<stdio.h>
void main(){
	int i, j, r=7, c=3, k=65;
	for(i=1; i<=r; i++){
		for(j=1; j<=r-i; j++){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
}
