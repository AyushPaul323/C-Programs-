#include<stdio.h>
#include<math.h>
int main()
{
	int i=0,n,d=0,s=0,sq=0,start=0,end=0,cpy=0;
	printf("Enter the number of digits");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		start=pow(10,i);
		end=9*start+end;
	}
	for(i=start;i<=end;i++)
	{
		cpy=i;
		while(cpy>0)
		{
			d=cpy%10;
			s=s+(int)(pow(d,2));
			cpy=cpy/10;
		}
		sq=sqrt(s);
		sq=sq*sq;
		if(sq==s)
		printf("%d\n",i);
		else
		continue;
	}
	return 0;
}
