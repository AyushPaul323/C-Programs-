#include <stdio.h>
int fact(int n)
{
	int i=0,p=1;
	for(i=1;i<=n;i++)
	{
		p=p*i;
	}
	return p;
}
int main()
{
    int x=0,f,i=0;
	float sum=0.0;
    printf("Enter term");
    scanf("%d", &x);
    for(i=1;i<=x;i++)
    {
    	f=fact(i);
    	if(i%2==0)
    	{
    	sum=sum-(1.0/f);
		}
		else
		{
			sum=sum+(1.0/f);
		}
	}
    printf("Sum of the series: %f",sum);
    return 0;
}
