#include<stdio.h>
void main(){
	int i,j,r=10;
	for(i=0; i<=r; i++){
		for(j=0; j<=i; j++){
			printf("*");
		}
		
		for(j=0; j<=r-i-1; j++){
			printf("--");
		}
		for(j=0;j<=i; j++){
			printf("*");
		}
		printf("\n");
	}
}
