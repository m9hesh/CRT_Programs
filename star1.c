#include<stdio.h>
void main(){
	int i,j,r=4;
	for(i=1; i<=r; i++){//row
		for(j=1; j<=r-i; j++){//column
			printf("* ");
		}
		printf("\n");
	}
}
