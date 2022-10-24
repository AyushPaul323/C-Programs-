#include<stdio.h>
#include<string.h>
int main()
{
	char n[30];
	gets(n);
	int len=strlen(n),i=0,j=0,c=-1;
	for(i=0;i<len;i++)
	{
		c=0;
		for(j=0;j<len;j++)
		{
			if(n[i]==n[j])
			c++;
		}
		if(c==1)
		{
			printf("%c",n[i]);
			break;
		}
		else
		continue;
	}
	return 0;
}
