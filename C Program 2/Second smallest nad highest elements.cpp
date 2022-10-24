#include<stdio.h>
#include <limits.h>
int main()
{
    int n,i=0,b,c;
    printf("ENter the size of the array");
    scanf("%d",&n);
    int a[n];
    printf("Enter the element in the array");
    for(i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
	}
	if (n < 2)
    {
        printf("Invalid Input");
    }
 
    b = c = INT_MAX;
    for (i = 0; i < n ; i ++)
    {
        if (a[i] < b)
        {
            c = b;
            b = a[i];
        }
        else if (a[i] < c && a[i] != b)
            c = a[i];
    }
    if (c == INT_MAX)
        printf("There is no second smallest element\n");
    else
        printf("The smallest element is %d and second Smallest element is %d\n", b, c);
    return 0;
}
