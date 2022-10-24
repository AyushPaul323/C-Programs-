#include <stdio.h>
#include <stdlib.h>
struct node{
	int info;
	struct node * next;
};
typedef struct node NODE;
NODE *head = NULL;
void insertatbeg()
{
	int item;
	NODE *ptr;
	printf("Enter a value");
	scanf("%d", &item);
	if(head == NULL)
	{
		ptr = (NODE *) malloc (sizeof (NODE));
		ptr -> info=item;
		ptr -> next= ptr;
		head=ptr;
	}
	else
	{
		ptr = (NODE *) malloc (sizeof (NODE));
		ptr -> info=item;
		ptr -> next= head->next;
		head->next=ptr;
	}
}
void insertatend()
{
	int item;
	NODE *ptr,*tmp;
	ptr = (NODE *) malloc (sizeof (NODE));
	printf("Enter a value");
	scanf("%d", &item);
	tmp=head;
	if(head == NULL)
	{
		ptr -> info=item;
		ptr -> next=ptr;
		head=ptr;
	}
	else
	{
		ptr->info=item;
		ptr->next=head->next;
		head->next=ptr;
		head=ptr;
	}
}

void deletefrombeg()
{
	NODE *ptr;
	ptr=head;
		while(ptr->next!=head)
		{
			ptr=ptr->next;
		}
		head=head->next; 
		printf("\n The deleted node is -> %d",ptr->info);
		ptr->next=head;
		free(ptr);
}

void display()
{
	NODE *t=head;
	if(t==NULL)
	{
		puts("Empty List");
	}
	else{
		t=head->next;
		do{
			printf("%d\n",t->info);
			t=t->next;
		}while(t!=head->next);
	}
} 
int main()
{
	int ch;
	while(true)
	{
	printf("\n Enter a choice enter 1 for insert at beg \n enter 2 for Display \n 3 insertatend \n 4 for delete from the beg \n 5 for delete from end \n 6 for exit\n");
	scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				insertatbeg();
				break;
			case 2:
				display();
				break;
			case 3:
				insertatend();
				break;
			case 4:
				deletefrombeg();
				break;
			/*case 5:
				deleteatend();
				break;
			case 6:
				exit(true);
				break;*/
			default:
				printf("Wrong choice");
								
		}
}
return 0;
}
