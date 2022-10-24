#include <stdio.h>
main()
{
	int n,i=0;
	printf("Enter the limit");
	scanf("%d", &n);
	int a[n],b[n];
	printf("Enter the element ");
	for(i=0;i<n;i++)
	{
		scanf("%d" , &a[i]);
	}
	for(i=0;i<n;i++)
	{
		b[i]=a[n-1-i];
	}
	printf("The reverse element of an array:-");
	for(i=0;i<n;i++)
	{
	printf("%d\n",b[i]);
    }
}

