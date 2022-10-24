#include<stdio.h>
struct values
{
int i;
int val[10];
} v={1,2,3,4,5,6,7,8,9}, *ptr=&v;
main()
{
printf("\n %d %d", v.i, ptr->i);
printf("\n %d %d %d", v.val[3], ptr->val[3], *(v.val+3));
}
