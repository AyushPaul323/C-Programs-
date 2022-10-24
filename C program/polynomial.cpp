#include <stdio.h>
#include <stdlib.h>

struct node
{
	int coeff;
	int pow;
	struct node* next;
};
typedef struct node NODE;

void create(NODE** poly)
{
	int coeff,exp,cont;
	NODE* temp=(NODE*)malloc(sizeof(NODE));
	*poly=temp;
	do
	{
		printf("\nCoeffecient : ");
		scanf("%d",&coeff);
		printf("Exponent : ");
		scanf("%d",&exp);
		temp->coeff=coeff;
		temp->pow=exp;
		temp->next=NULL;
		printf("\nEnter 1 to add more polynomials or 0 to exit : ");
		scanf("%d", &cont);
		if(cont)
		{
			temp->next=(NODE*)malloc(sizeof(NODE));
			temp=temp->next;
			temp->next=NULL;
		}
	}
	while(cont);	
}

void display(NODE* poly)
{
	while(poly!=NULL)
	{
		printf("%dx^%d", poly->coeff, poly->pow);
		poly = poly->next;
		if(poly != NULL)
		{
			printf(" + ");
		}
	}
	printf("\n");
}

void add(NODE** result, NODE* first, NODE* second)
{
 	NODE* temp = (NODE*)malloc(sizeof(NODE));
 	temp->next = NULL;
 	*result = temp;
 	while(first && second)
 	{
 		if(first->pow > second->pow)
 		{
 			temp->coeff = first->coeff;
 			temp->pow = first->pow;
 			first = first->next;
 		}
 		else if(first->pow < second->pow)
 		{
 			temp->coeff = second->coeff;
 			temp->pow = second->pow;
 			second = second->next;
 		}
 		else
 		{
 			temp->coeff = first->coeff + second->coeff;
 			temp->pow = first->pow;
 			first = first->next;
 			second = second->next;
 		}

 		if(first && second)
 		{
 			temp->next = (NODE*)malloc(sizeof(NODE));
 			temp = temp->next;
 			temp->next = NULL;
 		}
 	}
 	while(first || second)
 	{
 		temp->next = (NODE*)malloc(sizeof(NODE));
 		temp = temp->next;
 		temp->next = NULL;
 			
 		if(first)
 		{
 			temp->coeff = first->coeff;
 			temp->pow = first->pow;
 			first = first->next;
 		}

 		else if(second)
 		{
 			temp->coeff = second->coeff;
 			temp->pow = second->pow;
 			second = second->next;
 		}
 	}
}

int main()
{

	NODE* first = NULL;
	NODE* second = NULL;
	NODE* result = NULL;

	printf("\nEnter the corresponding data:-\n");
	printf("\nFirst polynomial:\n");
	create(&first);
	printf("\nSecond polynomial:\n");
	create(&second);
	printf("\nThe first polynomial expression is : ");
	display(first);
	printf("\nThe second polynomial expression is : ");
	display(second);
	add(&result, first, second);
	printf("\nThe addition of the polynomials are : ");
	display(result);
	return 0;
}

