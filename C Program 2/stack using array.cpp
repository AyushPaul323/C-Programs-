#include<stdio.h>
#include<stdlib.h>
#define MAX 3
void push(int stk[],int *top,int data)
{
	if((*top+1)==MAX)
	{
		printf("OVERFLOW");
		return;
	}
	else
	{
	*top=*top+1;
	stk[*top]=data;
	}
}
void pop(int stk[],int *top)
{
	if(*top==-1)
	{
		printf("UNDERFLOW");
		return;
	}
	printf("THE ELEMENT TO BE POPPED IS:%d",stk[*top]);
	*top=*top-1;
}
void peek(int stk[],int *top)
{
	if(*top==-1)
	{
		printf("THERE IS NO ELEMENT IN THE STACK");
		return;
	}
	printf("THE TOPMOST ELEMENT IS:%d",stk[*top]);
}
void display(int stk[],int *top)
{
	int i;
	if(*top==-1)
	{
		printf("NO ELEMENT IS PRESENT IN STACK");
	}
	else
	{
		for(i=*top;i>=0;i--)
		{
			printf("%d ",stk[i]);
		}
	}
}
int main()
{
	int ch,D,top=-1,A[MAX];
	while(1)
	{
		printf("\n1:To Push An Element\n");
		printf("2:To Pop An Element\n");
		printf("3:To Peek\n");
		printf("4:For Displaying\n");
		printf("5:For exit\n");
		printf("Enter your Choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			printf("Enter the element to be pushed: ");
			scanf("%d",&D);
			push(A,&top,D);
			break;
			case 2:
			pop(A,&top);
			break;
			case 3:
			peek(A,&top);
			break;
			case 4:
			display(A,&top);
			break;
			case 5:
			exit(1);
			break;
			default:
			printf("WRONG CHOICE\n");
			break;	
		}
	}
	return 0;
}
