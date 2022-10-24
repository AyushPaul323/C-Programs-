#include <stdio.h>
int main()
{
	int n,i;
	printf("Enter number of elements\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d integers\n", n);
    for (i= 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}
