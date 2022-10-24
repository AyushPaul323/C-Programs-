#include <stdio.h>
int search(int a[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (a[i] == x)
            return i;
    return -1;
}
int main()
{
    int a[] = { 2, 3, 4, 10, 40 };
    int x = 10;
    int n = sizeof(a) / sizeof(a[0]);
    int result = search(a, n, x);
    if(result == -1)
    {
      printf("Element is not present in array");
    }
   else
      printf("Element is present at index %d", result);
    return 0;
}
