#include<stdio.h>
void main(){
	int no, rev;
	printf("Enter a Number :");
	scanf("%d", &no);
	while(no!=0){
		rev=(rev*10)+no%10;
		no=no/10;
	}
	printf("Reversed Number is :%d", rev);
}
