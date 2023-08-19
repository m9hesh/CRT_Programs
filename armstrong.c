#include<stdio.h>
void main(){
	int no=371, sum=0;
	int temp=no;
	int n=0;
	while(no!=0){
		n=no%10;
		sum=sum+(n*n*n);
		no=no/10;
	}
	if(sum==temp){
		printf("%d is a Armstrong Number", temp);
	}else{
		printf("%d is Not a Armstrong Number", temp);
	}
}
