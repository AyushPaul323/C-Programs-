#include<stdio.h>
int main()
{
	int n, t ,sum ,pro=1,i=0,c=0;
	printf("Enter the test cases");
	scanf("%d",&t);
	int b[t];
	printf("Enter the size");
		scanf("%d",&n);
		int a[n];
	if(t>=1 && t<=50)
	{
		if(n>=1 && n<=50)
		{
			while(t>0)
			{
				printf("Enter the element of the array");
				for(i=0;i<n;i++)
				{
					scanf("%d",&a[i]);
				}
				for(i=0;i<n-1;i++)
				{
					sum=sum+a[i];
					pro=pro*a[i];
				}
				if(sum==pro)
				{
					b[c]=n+1;	
				}
				c++;
					t--;
			}
				
		}
	}
	for(i=0;i<c;i++)
	printf("%d",&b[i]);
}
