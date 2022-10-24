#include <stdio.h>
int main()
{
	int s;
	printf("Enter the choice 1 for sum 2 for difference and 3 for product:");
	scanf("%d",&s);
	switch(s);
	{
		case 1:
			int a,b,sum;
			printf("Enter the two number:");
			scanf("%d%d",&a,&b);
			sum=a+b;
			printf("Sum:-%d",s);
			break;
		case 2:
			int x,y,diff;
			printf("Enter the two number:");
			scanf("%d%d",&x,&y);
			diff=x-y;
			printf("Difference:-%d",diff);
			break;
		case 3:
			int c,d,pro;
			printf("Enter the two number:");
			scanf("%d%d",&c,&d);
			pro=c*d;
			printf("Product:-%d",pro);
			break;
			default:
			printf("Wrong Choice");
				
	}
}
