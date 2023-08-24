#include<stdio.h>
void main(){
	int a=5, *p1, **p2, ***p3;
	p1=&a;
	p2=&p1;
	p3=&p2;
	printf("a=%d\n", a);
	printf("*p1=%d\n", *p1);
	*p1=10;
	**p2=*p1+5;
	***p3=**p2+5;
	printf("***p3=%d\n", ***p3);
}
