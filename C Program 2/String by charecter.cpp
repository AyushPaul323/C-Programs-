#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the charecter");
	scanf("%c",&ch);
	if(ch>='A' && ch<='Z' || ch>='a'&&ch<='z')
	printf("Charecter is alphabet");
	else if(ch>='0' || ch<'0')
	printf("Charecter is digit");
	else
	printf("Charecter is special  charecter");
	return 0;
}
