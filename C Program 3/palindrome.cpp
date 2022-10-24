#include <stdio.h>
#include<math.h>
int reverse(int n)
{
    int d=0,c=0,b=0,s=0;
    b=n;
    /*while(b>0)
    {
        c++;
        b=b/10;
    }
    b=n;
    while(b>0)
    {
        d=b%10;
        c--;
        s=(int)(pow(10,c)*d)+s;
        b=b/10;
    }*/
    while(b>0)
    {
    	d=b%10;
    	s=(s*10)+d;
    	b=b/10;
	}
    return s;
}
int main()
{
    int x=0,rev=0;
    printf("Enter the number");
    scanf("%d", &x);
    rev=reverse(x);
    if(rev==x)
    printf("Palindrome");
    else
    printf("Not Palindrome");
    return 0;
}
