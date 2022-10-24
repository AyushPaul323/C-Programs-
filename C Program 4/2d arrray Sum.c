#include <stdio.h>
main()
{  
int x,y,i,j;
printf("Enter the rows and column");
scanf("%d %d" , &x,&y);
int a[x][y];
for(i=0;i<x;i++)
{
	for(j=0;j<y;j++)
	{
		scanf("%d",&a[i][j]);
	}
}
int Sum=0,pro=0;
Sum=sum(a,x,y);
pro=multiple(a,x,y);
printf("Sum:-%d",Sum);
printf("Product:-%d",pro); 
}
int sum(int *a, int n , int m)
{
	int i,j,s=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			s=s+(*(a+i*m+j));
		}
	}
	return s;
}
int multiple(int *a, int n , int m)
{
	int i,j,p=1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			p=p*(*(a+i*m+j));
		}
	}
	return p;
}
