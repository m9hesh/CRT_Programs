#include<stdio.h>
void main(){
	int a=1025,*p;
	char *c;
	p=&a;
	c=p;
	
	printf("p=%d\n", *p);
	printf("c=%d\n", *c);
	printf("c+1=%d\n", *(c+1));
	printf("c+2=%d\n", *(c+2));
	
}
