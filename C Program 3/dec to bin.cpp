#include<stdio.h>
#include<math.h>
int main()
{
	int dec,bin=0,c=0,cpy,d;
	printf("Enter the decimal number");
	scanf("%d",&dec);
	cpy=dec;
	while(dec!=0)
	{
		d=dec%2;
		bin=(pow(10,c)*d)+bin;
		c++;
		dec=dec/2;
	}
	printf("Decimal %d to Binary %d",cpy,bin);
}
