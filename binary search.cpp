#include<stdio.h>
int main()
{
	int n,first,last,middle,s,count=0;
	int a[]={2,3,6,7,9,10,55,88};
	first=0,last=sizeof(a)/sizeof(a[0]);
	middle=(first+last)/2;
	printf("enter the search element:");
	scanf("%d",&s);
	while(first<=last)
	{
	if(s<a[middle])
	{
		last=middle-1;
		middle=(first+last)/2;
		
	}
	else if(s==a[middle])
	{
		printf("element identified at :%d",middle);
		count++;
		
		break;
	}
	else
	{
		first=middle+1;
		middle=(first+last)/2;
		
	}
}
	if(first>last)
	{
		printf("no such element");
	}
}