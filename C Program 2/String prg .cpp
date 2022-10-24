#include<stdio.h>
#include<string.h> 
int main()
{
	char s[100];
	int i=0,len=0,c=0,d=0;
	printf("Enter A Sentence");
	gets(s);
	len=strlen(s);
	for(i=0;i<=len-1;i++)
	{
		if(s[i]>='A' && s[i]<='Z')
		{
			printf("%c",s[i],".");
		}
		
	}
	return 0;
}
