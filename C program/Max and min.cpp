#include <stdio.h>
int main()
{
	int i=0,max,min,c=0,n,k,j=0,indmax,indmin,sum=0;
	int avg;
	printf("Enter the size");
	scanf("%d",&n);
	printf("Enter the value of k");
	scanf("%d",&k);
	int a[n];
	printf("Enter the array element");
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	min=max=a[0];
	for(j=1;j<=k;j++)
	{
	for(i=0;i<n;i++)
	{
	if(a[i]>max)
	{
		max=a[i];
		indmax=i;
	}
    
	 if(a[i]<min)
	{
		min=a[i];
		indmin=i;	
	}
	}
	a[indmax]=-100100;
	a[indmin]=-100100;
	}
	for(i=0;i<n;i++)
	{
		if(a[i]!=-100100)
		c++;
	}
	for(i=0;i<n;i++)
	{
		if(a[i]!=-100100)
		sum=sum+a[i];
	}
	printf("sum %d",sum);
	avg=sum/c;
	printf("Avg %d",avg);
 	return 0;
 	}
