#include<stdio.h>
#include<stdlib.h>
struct node{
	int info;
	struct node *next;
};
typedef struct node NODE;
NODE *head=NULL;

void insertatbeg()
{
	int item;
	printf("Enter the value to be inserted");
	scanf("%d",&item);
	NODE *ptr;
	if(head==NULL)
	{
		ptr=(NODE*)malloc(sizeof(NODE));
		ptr->info=item;
		ptr->next=NULL;
		head=ptr;
	}
	else
	{
		ptr=(NODE*)malloc(sizeof(NODE));
		ptr->info=item;
		ptr->next=head;
		head=ptr;
	}
}

void insertatend()
{
	int item;
	printf("Enter the value to be inserted");
	scanf("%d",&item);
	NODE *ptr,*tmp=head,*copy;
	if(head==NULL)
	{
		ptr=(NODE*)malloc(sizeof(NODE));
		ptr->info=item;
		ptr->next=NULL;
		head=ptr;
	}
	else
	{
		ptr=(NODE*)malloc(sizeof(NODE));
		ptr->info=item;
		ptr->next=NULL;
		while(tmp!=NULL)
		{
			copy=tmp;
			tmp=tmp->next;
		}
		copy->next=ptr;
	}
}

void deletefrombeg()
{
	NODE *ptr;
	if(head==NULL)
	printf("Empty Node");
	
	else
	{
		ptr=head;
		head=head->next;
		free(ptr);	
	}	
}	

void deleteatend()
{
	NODE *ptr=head->next,*copy;
	if(head==NULL)
	printf("Empty Node");
	
	else
	{
		copy=head;
		while(ptr->next!=NULL)
		{
			copy=ptr;
			ptr=ptr->next;
		}
		copy->next=NULL;
		free(ptr);

	}	
}	

void display()
{
	NODE *t;
	t=head;
	while(t!=NULL)
	{
		printf("%d",t->info);
		t=t->next;
	}
}
int main()
{
	int ch;
	while(true)
	{
		printf("\n Enter a choice enter 1 for insert at beg \n enter 2 for insert at the end \n 3 for dispaly the list \n 4 for delete from beg \n 5 for delete from end \n 6 for Search \n 7 for concat\n 8 for exit\n");
		scanf("%d",&ch);
			switch(ch)
			{
				case 1:
					insertatbeg();
					break;
				case 2:
					insertatend();
					break;	
				case 3:
					deletefrombeg();
					break;	
				case 4:
					deleteatend();
					break;
				case 5:
					display();
					break;						
			}
	}
	return 0;
}
