#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
typedef struct node Node;
Node *head=NULL;
int countNode(Node *head)
{
    Node *temp;
    temp=head;
    int c=1;
    while(temp->next!=head)
    {
        temp=temp->next;
        c++;
    }
    return(c);
}
void insertAtBeg(Node **head,int item)
{
	Node *ptr,*temp;
	ptr=(Node *)malloc(sizeof(Node));
	ptr->data=item;
	if(*head==NULL)
	{
		ptr->next=ptr;
		*head=ptr;
	}
	else
	{
		temp=*head;
		ptr->next=*head;
		while(temp->next!=*head)
		{
			temp=temp->next;
		}
		*head=ptr;
		temp->next=*head;
	}
}
void insertAtEnd()
{
	Node *ptr,*temp;
	ptr=(Node *)malloc(sizeof(Node));
	ptr->data=item;
	if(head==NULL)
	{
		ptr->next=*head;
		head=ptr;
	}
	else
	{
		temp=head;
		while(temp->next!=head)
		{
			temp=temp->next;
		}
		ptr->next=head;
		temp->next=ptr;
	}
}
void insertAtAnyPos(Node **head,int item,int pos)
{
	Node *ptr,*temp;int i=1;
	temp=*head;
	ptr=(Node *)malloc(sizeof(Node));
	ptr->data=item;
	if(*head==NULL)
	{
		ptr->next=ptr;
		*head=ptr;
	}
	else if(pos==1)
	{
		while(temp->next!=*head)
		{
			temp=temp->next;
		}
		ptr->next=*head;
		temp->next=ptr;
		*head=ptr;
	}
	else
	{
		while(i<(pos-1))
		{
			temp=temp->next;
			i++;
		}
		ptr->next=temp->next;
		temp->next=ptr;
	}
}
void delFromBeg(Node **head)
{
	Node *temp,*loc;
	temp=loc=*head;
	if(*head==NULL)
	{
		printf("THE LIST IS EMPTY");
	}
	else if(temp->next==*head)
	{
		*head=NULL;
		free(temp);
	}
	else
	{
		while(temp->next!=*head)
		{
			temp=temp->next;
		}
		temp->next=loc->next;
		*head=loc->next;
		loc->next=NULL;
		free(loc);
	}
}
void delFromEnd(Node **head)
{
	Node *temp,*del;
	del=temp=*head;
	if(*head==NULL)
	{
		printf("THE LIST IS EMPTY");
	}
	else if(temp->next==*head)
	{
		*head==NULL;
		free(temp);
	}
	else
	{
		while(del->next!=*head)
		{
			temp=del;
			del=del->next;
		}
		temp->next=del->next;
		del->next=NULL;
		free(del);
	}
}
void delFromAnyPos(Node **head,int pos)
{
	Node *temp,*del,*loc;
	int i=1;
	del=temp=*head;
	loc=del->next;
	if(*head==NULL)
	{
		printf("THE LIST IS EMPTY");
	}
	else if(pos==1)
	{
		while(temp->next!=*head)
		{
			temp=temp->next;
		}
		temp->next=del->next;
		*head=del->next;
		del->next=NULL;
		free(del);
	}
	else
	{
		while(i<(pos-1))
		{
			del=loc;
			loc=loc->next;
			i++;
		}
		del->next=loc->next;
		loc->next=NULL;
		free(loc);
	}
}
void search(Node **head,int key)
{
	Node *temp;
	temp=*head;
	if(*head==NULL)
	{
		printf("THERE IS NO ELEMENT IN THE LIST TO BE SEARCHED FOR");
	}
	else
	{
		do
		{
			if(temp->data==key)
			{
				printf("ELEMENT FOUND");
				break;
			}
			temp=temp->next;
		}
		while(temp!=*head);
		if(temp==*head)
		{
			printf("ELEMENT NOT FOUND");
		}
	}
}
void display(Node **head)
{
	Node *temp=*head;
	if(*head==NULL)
	{
		printf("THE LIST IS EMPTY");
	}
	else
	{
		do
		{
			printf("%d ",temp->data);
			temp=temp->next;
		}
		while(temp!=*head);
	}
}
int main()
{
	Node *start=NULL;
	int D,P,ch,c;
	while(1)
	{
		printf("\n1:For Inserting At The Beginning Of The List\n");
        printf("2:For Inserting At The End Of the List\n");
        printf("3:For Inserting At Any Position Of the List\n");
        printf("4:For Deleting From The Beginning of The List\n");
        printf("5:For Deleting From The End of the List\n");
        printf("6:For Deleting From Any Position of The List\n");
        printf("7:To Search For An Element\n");
        printf("8:For Displaying The List\n");
        printf("9:For Exiting\n");
        printf("Enter your Choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
        	case 1:
        	printf("Enter the element to be inserted: ");
            scanf("%d",&D);
            insertAtBeg(&start,D);
            break;
			case 2:
			printf("Enter the element to be inserted: ");
			scanf("%d",&D);
			insertAtEnd(&start,D);
			break;
			case 3:
			printf("Enter the position where the element is to be inserted: ");
			scanf("%d",&P);
			c=countNode(start);
			if(P>(c+1))
			{
				printf("THE ENTRY IS NOT POSSIBLE");
			}
			else
			{
				printf("Enter the element to be inserted: ");
				scanf("%d",&D);
				insertAtAnyPos(&start,D,P);
				
			}
			break;
			case 4:
			delFromBeg(&start);
			break;
			case 5:
            delFromEnd(&start);
            break;
			case 6:
			printf("Enter the position from where the deletion is to be performed: ");
			scanf("%d",&P);
			c=countNode(start);
			if(P>c)
			{
				printf("DELETION NOT POSSIBLE");
			}
			else
			delFromAnyPos(&start,P);
			break;
			case 7:
			printf("Enter the element to be searched for: ");
			scanf("%d",&D);	
			search(&start,D);
			break;
			case 8:
			display(&start);
			break;
			case 9:
			exit(1);
			break;
			default:
			printf("WRONG CHOICE\n");
			break;	
		}
	}
}
