#include <stdio.h>
#include <String.h>
struct Student
	{
		int roll;
		char name[30];
		float marks;
	};
int main()
{
	struct Student s;
	fflush(stdin);
	printf("Enter roll:-\n");
	scanf("%d",&s.roll);
	printf("Enter name:-\n");
	scanf("%s",&s.name);
	printf("Enter Marks:-\n");
	scanf("%f",&s.marks);
	printf("%d %f %s",s.roll,s.marks,s.name);

/*	char n[30];
	printf("Enter name");
	gets(n);
	printf("%s",n);
	*/
}
