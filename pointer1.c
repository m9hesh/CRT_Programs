#include<stdio.h>
void main(){
	int a=5, *p;
	int b=10, *c;
	int d=15, *e;
	
	p=&a;
	c=&b;
	e=&d;
	
	printf("*p=%d\n", *p);
	printf("*(p-1)=%d\n", *(p-1));
	printf("*(p-2)=%d\n", *(p-2));
}
