#include<stdio.h>
#include<stdlib.h>
typedef struct doublelinklist
{
	int val;
	struct doublelinklist *right;
	struct doublelinklist * left;
}sl;
sl *head=NULL;
void insert_end()
{
	sl *ptr;
	int item;
	printf("Enter the element\n");
	scanf("%d",&item);
	if(head==NULL)
	{
		ptr=(sl*)malloc(sizeof(sl));
		ptr->val=item;
		ptr->left=NULL;
		ptr->right=NULL;
		head=ptr;
	}
	else
	{
		sl *temp;
		temp=head;
		ptr=(sl*)malloc(sizeof(sl));
		ptr->val=item;
		ptr->right=NULL;
		while(temp->right!=NULL)
			temp=temp->right;
		temp->right=ptr;
		ptr->left=temp;
		
	}
}
void insert_beg()
{
	
	sl *ptr;
	int item;
	printf("Enter the number\n");
	scanf("%d",&item);
	if(head==NULL)
	{
		ptr=(sl*)malloc(sizeof(sl));
		ptr->val=item;
		ptr->left=NULL;
		ptr->right=NULL;
	}
	else
	{
		ptr=(sl*)malloc(sizeof(sl));
		ptr->val=item;
		ptr->left=NULL;
		ptr->right=head;
		head->left=ptr;	
	}
	head=ptr;	
}
void insert_after_position()
{
	sl *str,*tmp,*q;
	int pos,item;
	printf("Enter position\n");
	scanf("%d",&pos);
	printf("Enter the element to be insert\n");
	scanf("%d",&item);
	tmp=head;
	while(tmp->val!=pos)
	{
		tmp=tmp->right;
	}
	if(tmp->right!=NULL)
	{
		str=(sl*)malloc(sizeof(sl));
		str->val=item;
		str->right=NULL;
		str->left=tmp;
		tmp->right=str;
	}
	else
	{
		q=tmp->right;
		str=(sl*)malloc(sizeof(sl));
		str->val=item;
		str->left=tmp;
		str->right=q;
		tmp->right=str->left;
		q->left=str->right;
	}
}

void insertAtanyPos()
{
    sl *ptr,*temp;
    temp=head;
    int pos,item;
	printf("Enter position\n");
	scanf("%d",&pos);
	printf("Enter the element to be insert\n");
	scanf("%d",&item);
    int i=1;
    ptr=ptr=(sl*)malloc(sizeof(sl));
    ptr->val=item;
    if(head==NULL)
    {
        ptr->left=NULL;
        ptr->right=NULL;
        head=ptr;
    }
    else if(pos==1)
    {
        ptr->left=NULL;
        ptr->right=head;
    	head=ptr;
    }
    else
    {
        while(i<(pos-1))
        {
            temp=temp->right;
            i++;
        }
        ptr->left=temp;
        ptr->right=temp->right;
        temp->right=ptr;
    }
}

void display()
{ 
	sl *temp=head; 
	while(temp!=NULL)
	{
		printf("%d -> ",temp->val);
		temp=temp->right;
	}
	printf("NULL");
}
int main()
{
	int ch;
	while(1)
	{
		printf("\n1>insert at end 2>insert at beg 3>insert after position 4>insert before position 5>Delete 6>Delete from end 7>display 8>exit\n");
		printf("enter your choise\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				insert_end();
				break;
			case 2:
				insert_beg();
				break;
			case 3:
				insert_after_position();
				break;
				case 4:
				insertAtanyPos();
				break;
			/*case 5:
				delete_position();
				break;
			case 6:
				delete_end();
				break;	*/
			case 7:
				display();
				break;
			case 8:
				return 0;
		}
	}
	return 0;
}
