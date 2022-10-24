#include <stdio.h>
int main()
{
	int n,key,pos,i=0,c,size;
	printf("Enter the Limit of the array");
	scanf("%d",&n);
	int a[n];
	printf("Enter the element of the array in sorted manner");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter element to be added\n");
	scanf("%d",&key);
	printf("Enter position where you want to add\n");
	scanf("%d",&pos);
	if(pos>n)
	a[n]=key;
	else 
	{
		c=pos;
		size=n+1;
		for(i=pos;i<size;i++)
		{
			a[i+1]=a[c];
			c++;
		}
	}
	printf("After insertion");
	for(i=0;i<size;i++)
	{
		printf("%d",a[i]);
	}
}
