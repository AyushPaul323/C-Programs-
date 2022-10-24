#include <stdio.h>
int main()
{
	int n,x;
	printf("Enter the size of the array");
	scanf("%d",&n);
	int a[n],*ptr,i=0,c=0;
	ptr=a;
	printf("Enter the element");
	for(i=0;i<n;i++)
	{
		scanf("%d",(ptr+i));
	}
	printf("Enter the number to be searched:");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		if(*(ptr+i)==x)
		c=1;
	}
	if(c==1)
	printf("The searched number is found");
	else
	printf("No numbers are duplicate");
	return 0;
}
