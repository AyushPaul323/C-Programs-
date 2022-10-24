#include <stdio.h>
struct Distance 
{
   int km;
   int m;
} d1, d2, res;

int main() 
{
     printf("Enter 1st distance\n");
   	 printf("Enter kilometer: ");
     scanf("%d", &d1.km);
     printf("Enter meter: ");
     scanf("%d", &d1.m);
 
     printf("\nEnter 2nd distance\n");
     printf("Enter kilomter: ");
     scanf("%d", &d2.km);
     printf("Enter meter: ");
     scanf("%d", &d2.m);
     
	 res.km = d1.km + d2.km;
	  res.m = d1.m + d2.m;

     if(res.m >= 1000) 
	 {
        res.km=res.km+(res.m/1000);
        res.m = res.m % 1000;
     }
      printf("\nSum of distances = %d km \t %d m", res.km, res.m);
      return 0;
}

