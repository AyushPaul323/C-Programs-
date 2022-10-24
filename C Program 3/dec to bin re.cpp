#include<stdio.h>
int dec_bin(int dec)
{
	if(dec==0)
	return ;
	else
	return (dec % 2 * dec_bin(dec/2));
}

int main()
{
	int dec,bin;
	printf("Enter the decimal number");
	scanf("%d",&dec);
	bin=dec_bin(dec);
	printf("Decimal %d to Binary %d",dec,bin);
}
