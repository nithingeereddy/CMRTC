//Swapping of two numbers using pointers
#include<stdio.h>
int main()
{
	int a,b,*p,*q;
	printf("Enter the 2 numbers:");
	scanf("%d%d",&a,&b);
	p=&a;
	q=&b;
	*p=*p+*q;
	*q=*p-*q;
	*p=*p-*q;
	printf("After swaping:%d & %d",a,b);
	return 0;
}
