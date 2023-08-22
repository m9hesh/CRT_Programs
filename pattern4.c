#include<stdio.h>
void main(){
	int i, j, r=17, c=7, k=1;
	for(i=1; i<=r; i++){
		for(j=1; j<=c; j++){
			printf("%3d", k);
			k=k+1;
		}
		printf("\n");
	}
}
