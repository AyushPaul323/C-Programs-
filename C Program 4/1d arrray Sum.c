#include <stdio.h>
int main()
{
    int  n, j, i, swap;
    printf("Enter number of elements\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d integers\n", n);
    for (i= 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i=0;i<n-1;i++)
    {
        for (j=0;j<n-i-1;j++)
        { 
            if (a[j]>a[j+1])
            {
                swap= a[j];
                a[j]=a[j+1];
                a[j+1]=swap;
            }
        }
    }
 
    printf("Sorted list in ascending order:\n");
 
    for (i=0;i<n;i++)
        printf("%d\n", a[i]);
    return 0;
}
