#include <stdio.h>
#include <stdlib.h>
struct node
{
	int info;
	struct node *next;
	struct node *prev;
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
		ptr -> next=NULL;
		ptr->prev=NULL;
	}
	else
	{
		ptr = (NODE *) malloc (sizeof (NODE));
		ptr -> info=item;
		ptr -> next=head;
		head->prev=ptr;
		ptr->prev=NULL;
	}
	head=ptr;
	
}
void insertatend()
{
	int item;
	NODE *ptr, *tmp;
	ptr = (NODE *)malloc(sizeof(NODE));
	printf("Enter a value");
	scanf("%d", &item);
	if (head == NULL)
	{
		ptr->prev = NULL;
		ptr->info = item;
		ptr->next = NULL;
	}
	else
	{
		tmp = head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		ptr->prev = tmp;
		ptr->info = item;
		ptr->next = NULL;
		tmp->next = ptr;
	}
}

void insertatanypos()
{
	int i, loc, item;
	NODE *nw, *ptr;
	printf("Enter a value");
	scanf("%d", &item);
	printf("Enter the location");
	scanf("%d", &loc);
	if(head==NULL || head!=NULL)
	{
		ptr = head;
		i = 1;
		while (i < loc - 1 && ptr != NULL)
		{
			ptr = ptr->next;
			i++;
		}
		if (loc == 1)
		{
			
			nw = (NODE *)malloc(sizeof(NODE));
			nw->info = item;
			nw->next = ptr;
			nw->prev = NULL;
		}
		else if (ptr == head)
		{
			insertatanypos();
		}
		else if (ptr != NULL)
		{
			nw = (struct node *)malloc(sizeof(struct node));
			nw->info = item;
			nw->next = ptr->next;
			nw->prev = ptr;
			if (ptr->next != NULL)
			{
				ptr->next->prev = nw;
			}
			ptr->next = nw;
		}
		else
		{
			printf(" The position you entered, is invalid.\n");
		}
	}
}

void deletefrombeg()
{
	NODE *ptr;
	if (head == NULL)
	{
		printf("Empty node");
	}
	else
	{
		ptr = head;
		head->prev = NULL;
		head = head->next;
		free(ptr);
	}
}
void deleteatend()
{
	NODE *tmp, *ptr;
	tmp = head;
	if (head == NULL)
	{
		printf("Empty node");
	}
	else
	{
		while (tmp->next != NULL)
		{
			printf("%d", tmp->info);
			tmp = tmp->next;
		}
		(tmp->prev)->next = NULL;
		free(tmp);
	}
}

void reverse()
{
	NODE* prev = NULL;
    NODE* current = head;
    NODE* next = NULL;
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}

void display()
{
	NODE *t = head;
	while (t != NULL)
	{
		printf("%d  ", t->info);
		t = t->next;
	}
}

int main()
{
	int ch;
	while (1)
	{
		printf("\n Enter a choice enter 1 for insert at beg \n enter 2 for Display \n 3 insertatend \n 4 for delete from the beg \n 5 for delete from end \n 6 for insert at any pos\n 7 for exit\n");
		scanf("%d", &ch);
		switch (ch)
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
		case 5:
			deleteatend();
			break;
		case 6:
			reverse();
			break;
		case 7:
			exit(1);
			break;
		default:
			printf("Wrong choice");
		}
	}
	return 0;
}
