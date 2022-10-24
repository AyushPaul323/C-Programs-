#include<stdio.h>
int main()
{
	/*int i;
	for(i=1;i<=10;i++)
	{
		printf("%d \t",i);
	}
	*/
	/*int i;
	while(i<10)
	{
		printf("%d \t",i);
		i++;
	}
	*/
	int i=1;
	do
	{
		i++;
		if(i==5)
		continue;
		printf("%d \t",i);
	}
	while(i<=10);
}


