#include<stdio.h>
int main()
{
int mat[100][100];
int i,j,r,c,n;
printf("Enter the number of rows:");
scanf("%d",&r);
printf("\nEnter the number of columns: ");
scanf("%d",&c);
printf("\nEnter number : ");
scanf("%d",&n);
if(r>0 && c>0)
{
if(r==c)
{
printf("Enter the values of the square matrix:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&mat[i][j]);
}
}
printf("The original matrix is:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d ",mat[i][j]);
}
printf("\n");
}
switch(n)
{
case 1 :
{
printf("The diagonal elements are:");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
if(i==j)
printf("%d,",mat[i][j]) ;
}
}
break;
}
case 2 :
{
printf("\nThe anti diagonal elements are:");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
if(i+j==r-1)
{
printf("%d,",mat[i][j]);
}
}
break;
}
}
case 3:
{
printf("\nThe boundary elements are:");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
if((i==0) || (j==0)|| (i==r-1)|| (j==c-1))
printf("%d,",mat[i][j]);
}
}
else if(r!=c)
{
printf("The diagonal and non diagonal elements do no exist");
printf("\nEnter the values of the non square matrix:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&mat[i][j]);
}
}
printf("The original matrix is:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d ",mat[i][j]);
}
printf("\n");
}
}
break;
}
case 4:
{
printf("\nThe boundary elements are:");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
if((i==0) || (j==0)|| (i==r-1)|| (j==c-1))
printf("%d,",mat[i][j]);
}
}
else
{
printf("The matrix cannot have zero or negative rows or columns");
}
break;
}
default:
printf("Choice is wrong");
}
}
}
}
