#include<stdio.h>
#include<String.h>
int main()
{
	int a[26],b=0,f=0,i=0,j=0;
	char s[30],c,ch[26];
	gets(s);
	int len=strlen(s),co=0;
	for(i=0;i<26;i++)
	{
		a[i]=i;
	}
    for (c = 'z'; c <= 'a'; c--){
        ch[i]=c;
        i++;
    }
    for(i=0;i<26;i++)
    printf("%s",ch[i]);
	for(i=0;i<26;i++)
	{	
		co=0;
		for(j=0;j<len;j++)
		{
			if(ch[i]==s[j])
			co++;
		}
		if(a[i]==co)
		f++;
		else
		{
			f=-1;
			break;
		}
	}
	if(f>0)
	printf("Yes");
	else
	printf("No");
	return 0;
}
