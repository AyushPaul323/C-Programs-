#include <stdio.h>
int main()
{
	int a[5],n;
	printf("Enter the nos to be searched:");
	scanf("%d",&n);
	int i=0,c=0;
	printf("Enter the array element");
	for(i=0;i<5;i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=0;i<5;i++)
	{
		if(n==a[i])
		{
		c=1;
		break;
	    }
	}
	if(c==1)
	printf("Found that element");
	else
	printf("No elements have duplicate values");
 	return 0;
}
