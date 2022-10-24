#include <stdio.h>
#include <stdlib.h>
struct Node{
	int coeff;
	int pow;
	struct Node* next;
};
typedef struct Node node;
void create_node(int x, int y,node **temp)
{
	node *r,*z;
	z=*temp;
	if(z==NULL)
	{
		r=(node*)malloc(sizeof(node));
		r->coeff=x;
		r->pow=y;
		*temp=r;
		r->next=(node*)malloc(sizeof(node));
		r=r->next;
		r->next=NULL;
	}
	else
	{
		r->coeff=x;
		r->pow=y;
		r->next=(node*)malloc(sizeof(node));
		r=r->next;
		r->next=NULL;
	}
}

void polyadd(node *poly1, node*poly2, node*poly)
{
	while(poly1->next && poly2->next)
	{
		if(poly1->pow > poly2->pow)
		{
			poly->pow=poly1->pow;
			poly->coeff=poly1->coeff;
			poly1=poly1->next;
		}
		else if(poly1->pow < poly2->pow)
		{
			poly->pow=poly2->pow;
			poly->coeff=poly2->coeff;
			poly2=poly2->next;
		}
		else
		{
			poly->pow=poly1->pow;
			poly->coeff=poly1->coeff+poly2->coeff;
			poly1=poly1->next;
			poly2=poly2->next;
		}
		poly->next=(node*)malloc(sizeof(node));
		poly=poly->next;
		poly->next=NULL;
	}
	while(poly->next || poly2->next)
	{
		if(poly1->next)
		{
			poly->pow=poly1->pow;
			poly->coeff=poly1->coeff;
			poly1=poly1->next;
		}
		if(poly2->next)
		{
			poly->pow=poly2->pow;
			poly->coeff=poly2->coeff;
			poly2=poly2->next;
		}
		poly->next=(node*)malloc(sizeof(node));
		poly=poly->next;
		poly->next=NULL;
	}
}

void show(node *NODE)
{
	while(NODE->next!=NULL)
	{
		printf("%dx^%d",NODE->coeff,NODE->pow);
		NODE=NODE->next;
		if(NODE->coeff>=0)
		{
			if(NODE->next!=NULL)
			printf("+");
		}
		
	}
}

int main()
{
	node *poly1=NULL,*poly2=NULL,*poly=NULL;
	create_node(6,2,&poly1);
	create_node(7,1,&poly1);
	create_node(2,0,&poly1);
	
	create_node(-4,1,&poly2);
	create_node(-7,0,&poly2);
	
	printf("1st Number\t");
	show(poly1);
	
	printf("\n2nd Number\t");
	show(poly2);
	
	poly=(node*)malloc(sizeof(node));
	polyadd(poly1,poly2,poly);
	printf("\nAdded Polynomial\t");
	show(poly);
	return 0;
}
