#include <stdio.h>
main()
{
int rows, coef = 1, space, i, j;
printf("\nEnter the number of rows :");
scanf("%d",&rows);
printf("\n");

for(i=0; i<rows; i++)
{
for(space=1; space <= rows-i; space++)
printf(" ");
printf("*");
}
printf("\n\n");
}
}
