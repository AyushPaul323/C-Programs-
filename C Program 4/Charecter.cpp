#include<stdio.h>
int main()
{
	int n,d=0,i=0,c=0,a[20],b=0,c1=0;
	printf("Enter the Number:");
	scanf("%d",&n);
	b=n;
	
	while(b>0)
	{
		c1++;
		b=b/10;
	}
	b=n;
	while(b>0)
	{
		d=b%10;
		a[c]=d;
		c++;
		b=b/10;
	}
	for(i=c1-1;i>=0;i--)
	{
		if(a[i]==0)
		printf("zero");
		if(a[i]==1)
		printf("one");
		if(a[i]==2)
		printf("two");
		if(a[i]==3)
		printf("three");
		if(a[i]==4)
		printf("four");
		if(a[i]==5)
		printf("five");
		if(a[i]==6)
		printf("six");
		if(a[i]==7)
		printf("seven");
		if(a[i]==8)
		printf("eight");
		if(a[i]==9)
		printf("nine");
		printf(" ");
	}
	return 0;	
}
