#include <stdio.h>
int main()
{
	int a,b,a1[20],b1[20],c=0,i=0,d=0;
	printf("Enter two number");
	scanf("%d %d",&a,&b);
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			a1[i]=i;
		}
	}
	for(i=1;i<=b;i++)
	{
		if(b%i==0)
		{
			b1[i]=i;
		}
	}
	for(i=0;i<20;i++)
	{
		if(a1[i]==b1[i])
		{
			if(a1[i]==1 && b1[i]==1)
			c++;
			if(a1[i]>1 && b1[i]>1)
			d++;
		}
			
	}
	
	if(c==1 && d==0)
	printf("This are Coprime Number");
	else
	printf("This are not Coprime Number");
}
