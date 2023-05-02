//factorial with recursion
#include<stdio.h>
long fac(int num)
{
	if(num==0)
	{
		return 1;
	}
	else
	 {
	 	return (num*fac(num-1));
	 }
}
int main()
{
	int num;
	long fact;
	printf("enter the number:");
	scanf("%d",&num);
	fact=fac(num);
	printf("%d",fact);
}




