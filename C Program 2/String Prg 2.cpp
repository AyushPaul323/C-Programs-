#include<stdio.h>
#include<string.h>
int  main()
{
	char s[100];
	int c=1,i=0,len=0,a[20];
	printf("Enter sentence");
	gets(s);
	len=strlen(s);
	a[0]=0;
	for(i=0;i<len;i++)
	{
		a[c]=i;
		if(s[i]==' ')
		{
			for(i=a[c];i>a[c-1];i--)
				printf("%c",s[i-1]);	
			printf(" ");
			c++;
		}
	}
	return 0;
}
