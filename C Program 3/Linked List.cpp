#include <stdio.h>
#include <stdlib.h>
struct node{
	int info;
	struct node * next;
};
typedef struct node NODE;
NODE *head = NULL;
NODE *pt;
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
	}
	else
	{
		ptr = (NODE *) malloc (sizeof (NODE));
		ptr -> info=item;
		ptr -> next=head;
	}
	head=ptr;
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
		ptr = (NODE *) malloc (sizeof (NODE));	
		ptr -> info=item;
		ptr -> next=NULL;
		head=ptr;
	}
	else
	{
		ptr = (NODE *) malloc (sizeof (NODE));
		ptr->info=item;
		ptr->next=NULL;
		tmp=head;
		while(tmp->next=NULL)
	{
		tmp=tmp->next;
	}
		tmp->next=ptr;
	}
}
void deletefrombeg()
{
	NODE *ptr;
	if(head == NULL)
	{
		printf("Empty node");
		
	}
	else
	{
		ptr=head;
		head=head->next;
		free(ptr);
	}
}
void deletefromend()
{
	NODE *q=head,*tmp=head;
	if(head == NULL)
	{
		printf("Empty node");
		
	}
	else if(head->next==NULL)
	head=NULL;
	else
	{
		while(tmp->next!=NULL)
		tmp=tmp->next;
		while(q->next!=tmp)
		q=q->next;
		q->next=NULL;
	}
}
void search()
{
	NODE *ptr=head;
	int KEY,flag=0;	
	printf("Enter a value");
	scanf("%d",&KEY);
	if(head==NULL)
		printf("Empty Node");
	else
	{
		while(ptr!=NULL)
		{
			if(ptr->info==KEY)
			{
				printf("exist");
				flag=1;
				break;
			}
			else
			{
				ptr=ptr->next;
				
			}
	
		}
		if(flag==0)
		printf("Not exist");
	}
}

void concatenate(NODE *a,NODE *b)
{
    if( a != NULL && b!= NULL )
    {
        if (a->next == NULL)
            a->next = b;
        else
            concatenate(a->next,b);
    }
    else
    {
        printf("Either a or b is NULL\n");
    }
}

void two_linked_list()
{
	{
    NODE *prev,*a, *b, *p;
    int n,i;
    printf ("number of elements in a:");
    scanf("%d",&n);
    a=NULL;
    for(i=0;i<n;i++)
    {
        p=(NODE*)malloc(sizeof(NODE));
        scanf("%d",&p->info);
        p->next=NULL;
        if(a==NULL)
            a=p;
        else
            prev->next=p;
        prev=p;
    }
    printf ("number of elements in b:");
    scanf("%d",&n);
    b=NULL;
    for(i=0;i<n;i++)
    {
        p=(NODE*)malloc(sizeof(NODE));
        scanf("%d",&p->info);
        p->next=NULL;
        if(b==NULL)
            b=p;
        else
            prev->next=p;
        prev=p;
    }
    concatenate(a,b);
}
}

display_concate(NODE *pt)
{
    if(pt == NULL)
    {
        printf("NULL\n");
    }
    else
    {
        printf("%d\n", pt -> info);
        display_concate(pt->next);
    }
}

void display()
{
	NODE *t=head;
	while(t!=NULL)
	{
		printf("%d  ",t->info);
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
						display();
						break;
							case  4:
								deletefrombeg();
								break;
									case 5:
										deletefromend();
										break;
											case 6:
												search();
												break;
													case 7:
														two_linked_list();
														display_concate(pt);
														break;
															case 8:
																exit(true);
																break;
																	default:
																		printf("Wrong choice");
								
		}
	}
	return 0;
}

