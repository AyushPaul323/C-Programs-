#include<stdio.h>
main()
 {
 int a = 10, b = 20;
 f(a,&b);
 printf("%d %d ", a,b);
 }
 f(int x,int *y)
 {
 x = x * x;
 *y = *y * *y;
 }

