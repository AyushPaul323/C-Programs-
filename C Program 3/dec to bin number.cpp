#include<stdio.h>
int dec_bin(int dec)
{
	if(dec>=2)
	 return (dec_bin(dec/2)*10 + dec%2);
	else
	return 1;
}

int main()
{
	int dec,bin;
	printf("Enter the decimal number");
	scanf("%d",&dec);
	bin=dec_bin(dec);
	printf("Decimal %d to Binary %d",dec,bin);
}
