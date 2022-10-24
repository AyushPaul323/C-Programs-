#include<stdio.h>
#include<string.h>
int main()
{
  char ch;
  printf("Press any character:");
  ch = getch();
  printf("\nPressed character is:");
  putch(ch);
  getch();
  return 0;
}
