#include <stdio.h>
main()
{ 
 int n;
 printf("Enter the number\n");
 scanf("%d", &n);
 int d=0,b=n,i=0,p=0;
 if(b>0)
 {
 	while(b>0)
 	{
 		i++;
 		b=b/10;
    }
 b=n;
 while(b>0)
 {
 	d=b%10;
 	i--;
 	p=p+d*(pow(10,i));
 	b=b/10;
 }
 printf("Reverse %d",p);
 }
  else
  printf("No negetive number is allowed");
}
	
    
