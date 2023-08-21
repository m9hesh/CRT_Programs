#include<stdio.h>
void main(){
	int s=0, n=100, a=1,b=1, i=0;
	printf("%d %d ",a,b);
	while(i<n-2){
		s=a+b;
		if(s>=1 && s<=100){
			printf("%d ", s);	
		}
		a=b;
		b=s;
		i++;
	}
}
