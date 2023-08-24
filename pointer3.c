#include<stdio.h>
void main(){
	int a=5, *p1, **p2;
	p1=&a;
	p2=&p1;
	
	printf("p1=%d\n", p1);
	printf("p2=%d\n", p2);
	printf("*p1=%d\n", *p1);
	printf("*p2=%d\n", *p2);
}
