#include<stdio.h>
void main(){
	int no,count,i;
	printf("Enter a number :");
	scanf("%d", &no);
	for(i=1; i<=no; i++){
		if(no%i==0){
			count++;
		}
	}
	if(count==2){
		printf("%d is a Prime Number", no);
	}else{
		printf("%d is not a Prime Number", no);
	}
}
