#include<stdio.h>
void main(){
	int a=5, *p1, **p2, ***p3;
	p1=&a;
	p2=&p1;
	printf("p1=%d and *p1=%d\n", p1,*p1);
	printf("p2=%d and *p2=%d and **p2=%d\n", p2, *p2, **p2);
}
