#include <stdio.h>
int main()
{
    int n,i=0,s=0,a=0,b=1;
    printf("Enter the limit:-");
    scanf("%d",&n);
    printf("Fibonacci Series:-");
	printf("%d %d",a,b);
	for(s=a+b;s<n;s=a+b)
	{
		printf(" %d",s);
		a=b;
		b=s;
	}    
	
    return 0;
}
