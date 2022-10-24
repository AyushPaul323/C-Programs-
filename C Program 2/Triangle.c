#include <stdio.h>
main()  
{  
    int s1,s2,s3;
    printf("Enter the side of triangle");
    scanf("%d %d %d", &s1, &s2 , &s3);
    if(s1>0 && s2>0 && s3>0)
	{
		if(s1==s2 && s2==s3)
		printf("Equilateral Triangle");
		else if("s1==s2 || s2==s3 || s3==s1")
		printf("Isosceles Triangle");
		else
		printf("Scalene Triangle");
	}
	else
	printf("Side cannot negative");
 } 
