//odd or even in array
#include<stdio.h>
int main()
{
	int a[]={1,4,5,6,7,42,45,22,87,90,8,2,5,7},l,i;
	l=sizeof(a)/sizeof(a[0]);
	printf("even numbners:");
	for(i=0;i<l;i++)
	{
		if(a[i]%2==0)
		{
			printf("%d ",a[i]);
		}
	}
	printf("\nodd numbers:");
	for(i=0;i<l;i++)
	{
		if(a[i]%2!=0)
		{
			printf("%d ",a[i]);
		}
	}
}