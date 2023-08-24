#include<stdio.h>
void m1(int *a){
	*a=*a+1;
}
void main(){
	int a=10, *p;
	p=&a;
	m1(p);
	printf("a=%d", a);
}
