#include<stdio.h>
int main()
{
	int n,i,max,min;
	printf("Enter the size of the array");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements of the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=min=a[0];
	for(i=0;i>n;i++)
	{
		if(a[i]>max)
		max=a[i];
		if(a[i]<min)
		min=a[i];
	}
	printf("Max and Min %d %d",max,min);
	return 0;
}
