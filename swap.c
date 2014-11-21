/*
 *Swap two variables without using a third variable
 *
 * */
#include<stdio.h>
void main(){
	int a=10,b=15;
	printf("a=%d b=%d\n",a,b);
	a=b-a;
	b=b-a;
	a=a+b;
	printf("a=%d b=%d\n",a,b);
	}
