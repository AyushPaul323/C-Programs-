#include<stdio.h>
int main()
{
	int a[5];
	int i=0,max,min,indmax,indmin,c=0;
	printf("Enter the array");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
   	 max=min=a[0];
	for(c=0;c<2;c++)
	{
		for(i=0;i<5;i++)
		{
			if(a[i]>max)
			{
				max=a[i];
				indmax=i;
			}
			if(a[i]<min)
			{
					min = a[i];
					indmin=i;
			}
		}
		if(c==0)
		{
			printf("Smallest:%d",min);
			a[indmin]=max;
			min=a[0];
		}
		else
		break;
	}
	printf("Smallest:%d",min);
}
