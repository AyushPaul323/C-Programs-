#include <stdio.h>
int main()
{
	int a[5],b[5],c[10];
	printf("Enter the element of the array in sorted manner");
	int i=0,j=0;
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the element of the array in sorted manner");
	for(i=0;i<5;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<10;i++)
	{
		for(j=0;i<10;j++)
	{
		if(a[i]>b[j])
		c[j]=b[j];
		else
		{
			c[j]=a[i];	
			continue;
		}
	}
	}
	for(i=0;i<10;i++)
	{
		printf("%d",c[i]);
	}
}
