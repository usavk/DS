#include<stdio.h>
int main()
{
	int n,i,a[10],s,count=0;
	printf("enter the no of numbers in array:");
	scanf("%d",&n);
	printf("enter the numbers in array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the search element:");
	scanf("%d",&s);
	for(i=0;i<n;i++)
	{
		if(s==a[i])
		{
			count++;
		}
	}
	if(count==0)
	{
		printf("not found");
	}
	else
	{
		printf("found");
	}
}