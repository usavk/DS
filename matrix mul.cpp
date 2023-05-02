#include<stdio.h>
int main()
{
	int a[20][20],b[20][20],c[20][20],i,j,k,r1,r2,c1,c2;
	printf("enter the no of rows and cols in matrix 1:");
	scanf("%d%d",&r1,&c1);
	printf("enter the values in the first matrix:");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("enter the no of rows and cols in matrix 2:");
	scanf("%d%d",&r2,&c2);
	printf("enter the values in the second matrix:");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",&b[i][j]);
		}
		printf("\n");
	}
	if(c1!=r2)
	{
		printf("its not possible");
	}
	else
	{
		for(i=0;i<r1;i++)
		{
			for(j=-0;j<c2;j++)
			{
				c[i][j]=0;
				for(k=0;k<c1;k++)
				{
					c[i][j]+=a[i][k]*b[k][j];
				}
			}
		}
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				printf("%d\t",c[i][j]);
			}
			printf("\n");
		}
	}
}