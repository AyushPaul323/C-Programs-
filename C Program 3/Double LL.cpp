#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next,*prev;
};
typedef struct node NODE;
NODE *head=NULL;
void ins_beg()
{
	NODE *ptr;
	int item;
	ptr=(NODE*)malloc(sizeof(NODE));
	printf("Enter any value: ");
	scanf("%d",&item);
	if(head==NULL)
	{
		ptr->prev=NULL;
		ptr->data=item;
		ptr->next=NULL;
	}
	else{
		ptr->prev=NULL;
		ptr->data=item;
		ptr->next=head;
	}
	head=ptr;
}
void ins_end()
{
	NODE *temp,*ptr;
	temp=head;
	int item;
	ptr=(NODE*)malloc(sizeof(NODE));
	printf("Enter any value: ");
	scanf("%d",&item);
	if(head==NULL)
	{
		ptr->prev=NULL;
		ptr->data=item;
		ptr->next=NULL;
	}
	else{
		while(temp->next!=NULL)
		{
			temp=temp->next;
			ptr->prev=temp->next;
			ptr->data=item;
			ptr->next=NULL;
		}
		temp->next=ptr;
	}
}
void ins_loc()
{
	NODE *nw,*temp;
	int i,e,loc;
	printf("Enter any value: ");
	scanf("%d",&e);
	printf("Enter any location: ");
	scanf("%d",&loc);
	nw=(NODE*)malloc(sizeof(NODE));
	temp=head;
	if(head==NULL)
	{
		puts("Empty list");
	}
	else{
		for(i=1;i<loc-1 ;i++)
		{
			temp=temp->next;
		}
		nw->data=e;
		nw->next=temp->next;
		nw->prev=temp;
		temp->next=nw;
		(temp->next)->prev=nw;
	}
}
void del_beg()
{
	NODE *temp;
	if(head==NULL)
	{
		puts("List is empty");
	}
	else{
		temp=head;
		head->prev=NULL;
		head=head->next;
		free(temp);
	}
}
void del_end()
{
	NODE *temp,*ptr;
	if(head==NULL)
	{
		puts("List is empty");
	}
	else{
		ptr=head;
		temp=head->next;
		while(temp->next!=NULL)
		{
			ptr=temp;
			temp=temp->next;
		}
		ptr->next=NULL;
		free(temp);
	}
}
void del_loc()
{
	NODE *temp,*pos;
	temp=head;
	int i,loc;
	printf("Enter any location: ");
	scanf("%d",&loc);
	if(head==NULL)
	{
		puts("Empty list");
	}
	else if(loc==1)
	{
		del_beg();
	}
	else{
		for(i=1;i<loc;i++)
		{
			pos=temp;
			temp=temp->next;
		}
		pos->next=temp->next;
		(temp->next)->prev=pos;
		free(temp);
	}
}
void reverse()
{
	NODE *temp,*rev;
	temp=NULL;
	rev=head;
	while(rev!=NULL)
	{
		temp=rev->prev;
		rev->prev=rev->next;
		rev->next=temp;
		rev=rev->prev;
	}
	
}

void search()
{
	NODE *ptr=head;
	int KEY,flag=0;	
	printf("Enter a value\n");
	scanf("%d",&KEY);
	if(head==NULL)
		printf("Empty Node\n");
	else
	{
		while(ptr!=NULL)
		{
			if(ptr->data==KEY)
			{
				printf("exist\n");
				flag=1;
				break;
			}
			else
			{
				ptr=ptr->next;
				
			}
	
		}
		if(flag==0)
		printf("Not exist\n");
	}
}

void display()
{
	NODE *temp=head;
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}
int main()
{
	int ch;
	while(1)
	{
		puts("Enter 1 to insert at beginning");
		puts("Enter 2 to insert at end");
		puts("Enter 3 to insert at any location");
		puts("Enter 4 to delete at beginning");
		puts("Enter 5 to delete at end");
		puts("Enter 6 to delete at any location");
		puts("Enter 7 to reverse list");
		puts("Enter 8 to search");
		puts("Enter 9 to display");
		puts("Enter 10 to exit");
		printf("Enter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: ins_beg();
				break;
			case 2: ins_end();
				break;
			case 3: ins_loc();
				break;
			case 4: del_beg();
				break;
			case 5: del_end();
				break;
			case 6: del_loc();
				break;
			case 7: reverse();
				break;
			case 8: search();
				break;
			case 9: display();
				break;
			case 10: exit(1);
			default: puts("ERROR! Wrong Choice");
		}
	}
}

