#include<stdio.h>
int main()
{
	int a=0,b=1,c,n,i=2;
	printf("enter the n0 0f nums needed:");
	scanf("%d",&n);
	printf("%d %d",a,b);
	while(i<n)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d\t",c);
		i++;
	}
}