#include<stdio.h>
int main()
{
	int a[10],del,ins,j,dis,i,n,op;
	printf("enter the no of numbers:");
	scanf("%d",&n);
	printf("enter the numbers in array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the operation: 1 for insertion ,2 for deletion ,3 for display:");
	scanf("%d",&op);
	switch(op)
	{
		case 1:
			{
				printf("enter where to insert:");
				scanf("%d",&j);
				printf("enter the number to insert:");
				scanf("%d",&ins);
				for(i<=n;i>=j-1;i--)
				{
					a[i+1]=a[i];
				}
				a[j-1]=ins;
				for(i=0;i<=n;i++)
	            {
	            	printf("%d\n",a[i]);
	            }
			}
		case 2:
			{
				printf("enter where to delete:");
				scanf("%d",&del);
				for(i=del-1;i<n;i++)
				{
					a[i]=a[i+1];
				}
				n=n-2;
				for(i=0;i<=n;i++)
				{
		          printf("%d\n",a[i]);
		      }
		  }
		case 3:
			{
				printf("enter what to display:");
				scanf("%d",&dis);
				printf("%d",a[dis-1]);
			}
	}
}