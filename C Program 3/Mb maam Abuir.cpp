#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *next;

};
typedef struct node NODE;
NODE *head_1=NULL;
NODE *head_2=NULL;
void insertAtBeg_LL1()
{
    int item;
    NODE *ptr;
  	printf("\nEnter the value to be inserted: ");
    scanf("%d",&item);
    if(head_1==NULL)
    {
        ptr=(NODE *)malloc(sizeof(NODE));
        ptr->info=item;
        ptr->next=NULL;
    }
    else
    {
        ptr=(NODE *)malloc(sizeof(NODE));
        ptr->info=item;
        ptr->next=head_1;
    }
    head_1=ptr;
}
void insertAtBeg_LL2()
{
    int item1;
    NODE *ptr1;
    printf("\nEnter the value to be inserted: ");
    scanf("%d",&item1);
    if(head_2==NULL)
    {
        ptr1=(NODE *)malloc(sizeof(NODE));
        ptr1->info=item1;
        ptr1->next=NULL;
    }
    else
    {
        ptr1=(NODE *)malloc(sizeof(NODE));
        ptr1->info=item1;
        ptr1->next=head_2;
    }
    head_2=ptr1;
    
}
void insertAtEnd_LL1()
{
    int item;
    NODE *ptr,*temp;
    printf("Enter the element to be inserted: ");
    scanf("%d",&item);
    if(head_1==NULL)
    {
        ptr=(NODE *)malloc(sizeof(NODE));
        ptr->info=item;
        ptr->next=NULL;
        head_1=ptr;
    }
    else
    {
        temp=head_1;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        ptr=(NODE *)malloc(sizeof(NODE));
        ptr->info=item;
        ptr->next=NULL;
        temp->next=ptr;
    }
}
    void insertAtEnd_LL2()
    {
    int item1;
    NODE *ptr1,*temp1;	
    printf("Enter the element to be inserted: ");
    scanf("%d",&item1);
    if(head_2==NULL)
    {
        ptr1=(NODE *)malloc(sizeof(NODE));
        ptr1->info=item1;
        ptr1->next=NULL;
        head_2=ptr1;
    }
    else
    {
        temp1=head_2;
        while(temp1->next!=NULL)
        {
            temp1=temp1->next;
        }
        ptr1=(NODE *)malloc(sizeof(NODE));
        ptr1->info=item1;
        ptr1->next=NULL;
        temp1->next=ptr1;
    }
}
void insertAtAnyPos_LL1()
{
	int pos,item,c=1;
	NODE *temp,*ptr,*loc;
	loc=head_1;
	temp=head_1;
	printf("Enter the position and the element to be inserted:\n");
	scanf("%d%d",&pos,&item);
	if(head_1==NULL)
	{
		ptr=(NODE *)malloc(sizeof(NODE));
		ptr->info=item;
		ptr->next=NULL;
		head_1=ptr;
	}  
	else
	{
		if(pos==1)
		{
			ptr=(NODE *)malloc(sizeof(NODE));
			ptr->info=item;
			ptr->next=head_1;
			head_1=ptr;
		}
		else
		{
		loc=loc->next;
		while(c<(pos-1))
		{
			loc=loc->next;
			temp=temp->next;
			c++;
		}
		ptr=(NODE *)malloc(sizeof(NODE));
		ptr->info=item;
		ptr->next=temp->next;
		temp->next=ptr;
		}
	}
}
	void insertAtAnyPos_LL2()
	{
	int pos1,item1,c1=1;
	NODE *temp1,*ptr1,*loc1;	
	loc1=head_2;
	temp1=head_2;
	printf("Enter the position and the element to be inserted:\n");
	scanf("%d%d",&pos1,&item1);
	if(head_2==NULL)
	{
		ptr1=(NODE *)malloc(sizeof(NODE));
		ptr1->info=item1;
		ptr1->next=NULL;
		head_2=ptr1;
	}  
	else
	{
		if(pos1==1)
		{
			ptr1=(NODE *)malloc(sizeof(NODE));
			ptr1->info=item1;
			ptr1->next=head_2;
			head_2=ptr1;
		}
		else
		{
		loc1=loc1->next;
		while(c1<(pos1-1))
		{
			loc1=loc1->next;
			temp1=temp1->next;
			c1++;
		}
		ptr1=(NODE *)malloc(sizeof(NODE));
		ptr1->info=item1;
		ptr1->next=loc1;
		temp1->next=ptr1;
		}
	}
	
}
void delFromBeg_LL1()
{
	NODE *ptr;
	ptr=head_1;
	if(head_1==NULL)
	printf("The list is empty");
	else if(ptr->next==NULL)
	{
	head_1=NULL;
	free(ptr);
	}
	else
	{
		head_1=ptr->next;
		free(ptr);
	}
}
void delFromBeg_LL2()
{
	NODE *ptr1;
	ptr1=head_2;
	if(head_2==NULL)
	printf("The list is empty");
	else if(ptr1->next==NULL)
	{
	head_2=NULL;
	free(ptr1);
	}
	else
	{
		head_2=ptr1->next;
		free(ptr1);
	}
	
}
void delFromEnd_LL1()
{
	NODE *ptr,*loc;
	ptr=head_1;
	if(head_1==NULL)
	printf("The list is empty");
	else if(ptr->next==NULL)
	{
	head_1=NULL;
	free(ptr);
	}
	else
	{
		while(ptr->next!=NULL)
		{
			loc=ptr;
			ptr=ptr->next;
		}
		loc->next=NULL;
		free(ptr);
	}
}
void delFromEnd_LL2()
{
	NODE *ptr1,*loc1;
	ptr1=head_2;
	if(head_2==NULL)
	printf("The list is empty");
	else if(ptr1->next==NULL)
	{
	head_2=NULL;
	free(ptr1);
	}
	else
	{
		while(ptr1->next!=NULL)
		{
			loc1=ptr1;
			ptr1=ptr1->next;
		}
		loc1->next=NULL;
		free(ptr1);
	}
}
void delFromAnyPos_LL1()
{
	NODE *loc,*ptr;
	int pos,c=1;
	printf("Enter the position: ");
	scanf("%d",&pos);
	ptr=head_1;
	loc=head_1;
	loc=loc->next;
	if(head_1==NULL)
	printf("THE LIST IS EMPTY");
	else if(ptr->next==NULL)
	{
		head_1=NULL;
		free(ptr);
	}
	else
	{
		if((pos==1))
		{
			head_1=ptr->next;
			free(ptr);
		}
		else
		{
		while(c<(pos-1))
		{
			loc=loc->next;
			ptr=ptr->next;
			c++;
		}
		ptr->next=loc->next;
		free(loc);	
		}
	}
}
void delFromAnyPos_LL2()
{
	NODE *loc1,*ptr1;
	int pos1,c1=1;
	printf("Enter the position: ");
	scanf("%d",&pos1);
	ptr1=head_2;
	loc1=head_2;
	loc1=loc1->next;
	if(head_2==NULL)
	printf("THE LIST IS EMPTY");
	else if(ptr1->next==NULL)
	{
		head_2=NULL;
		free(ptr1);
	}
	else
	{
		if(pos1==1)
		{
			head_2=ptr1->next;
			free(ptr1);
		}
		else
		{
		while(c1<(pos1-1))
		{
			loc1=loc1->next;
			ptr1=ptr1->next;
			c1++;
		}
		ptr1->next=loc1->next;
		free(loc1);
	}
	}
}
void search()
{
	int choice;
	NODE *ptr;
	int key,c=0;
	printf("\n1:For Searching In Linked List 1\n");
    printf("\n2:For Searching In Linked List 2\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
    ptr=head_1;
    printf("Enter the element needed: ");
	scanf("%d",&key);
	if(head_1==NULL)
	printf("The Linked List is empty....");
	else
	{
		while(ptr->next!=NULL)
		{
			if(ptr->info==key)
			
			c++;
			ptr=ptr->next;
		}
		if(c==0)
		printf("Element is not present in the list");
		else
		printf("Element is present in the list");
	}
	break;
	case 2:
	ptr=head_2;
    printf("Enter the element needed: ");
	scanf("%d",&key);
	if(head_2==NULL)
	printf("The Linked List is empty....");
	else
	{
		while(ptr->next!=NULL)
		{
			if(ptr->info==key)
			
			c++;
			ptr=ptr->next;
		}
		if(c==0)
		printf("Element is not present in the list");
		else
		printf("Element is present in the list");
	}
	break;
	default:
	printf("WRONG ENTRY");
	break;
}
}
void reverseList()
{
	NODE *pre=NULL,*post=NULL,*temp;
	int choice;
	printf("\n1:For Reversing Linked List 1\n");
    printf("\n2:For Reversing Linked List 2\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:	
	temp=head_1;
	if(head_1==NULL)
	{
	printf("THE LIST IS EMPTY");	
	}
	else if(temp->next==NULL)
	{
		printf("THERE IS ONLY ONE ELEMENT PRESENT IN THE LIST");
	}
	else
	{
		while(temp!=NULL)
		{
			pre=temp->next;
			temp->next=post;
			post=temp;
			temp=pre;
		}
		head_1=post;
	}
	break;
	case 2:
	temp=head_2;
	if(head_2==NULL)
	{
	printf("THE LIST IS EMPTY");	
	}
	else if(temp->next==NULL)
	{
		printf("THERE IS ONLY ONE ELEMENT PRESENT IN THE LIST");
	}
	else
	{
		while(temp!=NULL)
		{
			pre=temp->next;
			temp->next=post;
			post=temp;
			temp=pre;
		}
		head_2=post;
	}
	break;
	default:
	printf("WRONG ENTRY");
	break;	
}
}
void concat()
{
	NODE *temp=head_1;
	if(head_1==NULL)
	{
		printf("LINKED LIST 1 IS EMPTY");
	}
	else if(head_2==NULL)
	{
		printf("LINKED LIST 2 IS EMPTY");
	}
	else
	{
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=head_2;
	}
}
void display()
{
	NODE *temp;
	int choice;
	printf("\n1:For Displaying Linked List 1\n");
    printf("\n2:For Displaying Linked List 2\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:	
    temp=head_1;
    if(head_1==NULL)
    {
    	printf("LIST IS EMPTY");
	}
	else
	{
    while(temp!=NULL)
    {
        printf("%d  ",temp->info);
        temp=temp->next;
    }
	}
    break;
    case 2:
    temp=head_2;
    if(head_2==NULL)
    {
    	printf("LIST IS EMPTY");
	}
	else
	{
    while(temp!=NULL)
    {
        printf("%d  ",temp->info);
        temp=temp->next;
    }
	}
	break;
	default:
	printf("WRONG ENTRY");
	break;
}
}
int main()
{
    int ch;
    while(1)
    {
        printf("\nEnter 1 for inserting at the beginning for LL1\n");
        printf("Enter 2 for inserting at the beginning for LL2\n");
        printf("Enter 3 for inserting at end for LL1\n");
        printf("Enter 4 for inserting at end for LL2\n");
        printf("Enter 5 for inserting at any position for LL1\n");
        printf("Enter 6 for inserting at any position for LL2\n");
        printf("Enter 7 for deleting from beginning from LL1\n");
        printf("Enter 8 for deleting from beginning from LL2\n");
        printf("Enter 9 for deleting from end for LL1\n");
        printf("Enter 10 for deleting from end for LL2\n");
        printf("Enter 11 for deleting from any position in LL1\n");
        printf("Enter 12 for deleting from any position in LL2\n");
        printf("Enter 13 for searching for elements\n");
        printf("Enter 14 for reversing lists\n");
        printf("Enter 15 for concatenation\n");
        printf("Enter 16 for displaying\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            insertAtBeg_LL1();
            break;
            case 2:
            insertAtBeg_LL2();
            break;
            case 3:
            insertAtEnd_LL1();
            break;
            case 4:
            insertAtEnd_LL2();
            break;
            case 5:
            insertAtAnyPos_LL1();
            break;
            case 6:
            insertAtAnyPos_LL2();
			break;	
            case 7:
            delFromBeg_LL1();
            break;
            case 8:
            delFromBeg_LL2();
			break;
			case 9:
			delFromEnd_LL1();
			break;	
            case 10:
            delFromEnd_LL2();
            break;
            case 11:
            delFromAnyPos_LL1();
            break;
            case 12:
            delFromAnyPos_LL2();
			break;
			case 13:
			search();
			break;
			case 14:
			reverseList();
			break;
			case 15:
			concat();
			break;
			case 16:
			display();
			break;	
            default:
            printf("!!!!!!!!!SORRY...THERE IS AN ERROR IN YOUR ENTRY!!!!!!!!!!");
            exit(1);
            break;
        }
    }
    return 0;
}
