#include<stdio.h>
int main()
{
	int n,i,k=0,temp;
	printf("Enter the N value:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		 k+=2;
		temp=k*(2*k-1);
		printf("%d  ",temp);
	}
}
