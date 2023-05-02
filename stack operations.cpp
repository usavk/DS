#include<stdio.h>
void push();
void pop();
void peek();
#define S 10
int top=-1,stack[S];
int main()
{
	int i,op,a,b;
	printf("enter the no of the elements present in stack:");
	scanf("%d",&top);
	printf("enter the numbers in the stack:");
	for(i=1;i<=top;i++)
	{
		scanf("%d",&stack[i]);
	}
	printf("enter the case:");
	scanf("%d",&op);
switch(op)
{ 
	case 1:
		{
			push();
	break;
}
case 2:
{	
	pop();
	break;
}
case 3:
	{
	 peek();
	break;
}
}
}
void peek()
{
if(top==-1)
	{
		printf("stack is empty");
	}
	else
	{
		int i;
		printf("the elements bin stack are:");
		for(i=top;i>=1;i--)
		{
			printf("%d ",stack[i]);
		}
	}
}
void pop()
{
	if(top==-1)
	{
		printf("stack is empty");
	}
	else
	{
		top--;
		int i;
		for(i=1;i<=top;i++)
		{
		printf("%d ",stack[i]);
	}
	}
}
void push()
{
	if(top==S-1)
	{
		printf("stack full");
	}
	else
	{
		top++;
		int i,a,b;
		printf("enter the number to insert:");
		scanf("%d",&a);
		b=a;
		stack[top]=b;
		for(i=1;i<=top;i++)
		{
			printf("%d",stack[i]);
		}
		printf("value is inserted");
	}
}