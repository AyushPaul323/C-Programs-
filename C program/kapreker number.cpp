#include <stdio.h>
#include <math.h>
int main()
{
    int n, i, p=0, d=0,c,sq;
    printf("Enter a number\n");
    scanf("%d", &n);
    sq=n*n;
    int copy;
    for(i=n;i>0;i=i/10)
    {
        d++;
    }
    p=pow(10,d);
    c=(sq%p)+(sq/p);
    if(n==c)
    printf("kapreker number");
    else
    printf("not kaperkar number");
    return 0;
}
