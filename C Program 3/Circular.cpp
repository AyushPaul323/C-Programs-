#include<stdio.h>
#include<stdlib.h>
struct node{
 int data;
 struct node *next;
};
typedef struct node nd;
nd *last=NULL;
void ins_front()
{
 nd *ptr;
 int e;
 ptr=(nd*)malloc(sizeof(nd));
 printf("Enter any value: ");
 scanf("%d",&e);
 if(last==NULL)
 {
  ptr->data=e;
  ptr->next=ptr;
  last=ptr;
 }
 else{
  ptr->data=e;
  ptr->next=last->next;
  last->next=ptr;
 }
}
void ins_end()
{
 int e;
 nd *ptr;
 ptr=(nd*)malloc(sizeof(nd));
 printf("Enter any value: ");
 scanf("%d",&e);
 if(last==NULL)
 {
  ptr->data=e;
  ptr->next=ptr;
  last=ptr;
 }
 else{
  ptr->data=e;
  ptr->next=last->next;
  last->next=ptr;
  last=ptr;
 }
}
void ins_loc()
{
 int e,loc,i;
 nd *ptr,*temp;
 ptr=(nd*)malloc(sizeof(nd));
 printf("Enter any value: ");
 scanf("%d",&e);
 printf("Enter location: ");
 scanf("%d",&loc);
 temp=last->next;
 if(last==NULL)
 {
  ptr->data=e;
  ptr->next=ptr;
  last=ptr;
 }
 else{
  for(i=1;i<loc-1;i++)
  {
   temp=temp->next;
  }
  ptr->data=e;
  ptr->next=temp->next;
  temp->next=ptr;
 }
}
void del_front()
{
 nd *temp;
 if(last==NULL){
  puts("Empty list");
 }
 else{
  temp=last->next;
  last->next=temp->next;
  free(temp);
 }
}
void del_end()
{
 nd *temp;
 if(last==NULL)
 {
  puts("Empty list");
 }
 temp=last->next;
 while(temp->next!=last)
 {
  temp=temp->next;
 }
 temp->next=last->next;
 last=temp;
}
void del_loc()
{
 int pos,i=1;
 nd *temp,*loc;
 temp=last->next;
 if(last==NULL){
  puts("Empty list");
 }
 else{
  printf("Enter location: ");
  scanf("%d",&pos);
  while(i<=pos-1)
  {
   temp=temp->next;
   i++;
  }
  loc=temp->next;
  temp->next=loc->next;
  free(loc);
 }
}
void search()
{
	nd *ptr=last;
	int KEY,flag=0;	
	printf("Enter a value\n");
	scanf("%d",&KEY);
	if(last==NULL)
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
void reverse()
{
	nd* prev = NULL;
 	nd* current = last;
 	nd* next = NULL;
 	while (current != last) 
	{
 		next = current->next;
 		current->next = prev;
 		prev = current;
 		current = next;
 	}
 	last = prev;
}
void display()
{
 nd *temp;
 if(last==NULL){
  puts("Empty List");
 }
 else{
  temp=last->next;
  do{
   printf("%d\n",temp->data);
   temp=temp->next;
  }while(temp!=last->next);
 }
}
int main()
{
 int ch;
 while(1)
 {
  puts("Enter 1 to insert at beginning");
  puts("Enter 2 to insert at end");
  puts("Enter 3 to insert at any position");
  puts("Enter 4 to delete at beginning");
  puts("Enter 5 to delete at end");
  puts("Enter 6 to delete at any position");
  puts("Enter 7 to reverse");
  puts("Enter 8 to display");
  puts("Enter 9 to exit");
  printf("Enter your choice: ");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1: ins_front();
    break;
   case 2: ins_end();
    break;
   case 3: ins_loc();
    break;
   case 4: del_front();
    break;
   case 5: del_end();
    break;
   case 6: del_loc();
    break;
   case 7: reverse();
    break;
   case 8: display();
    break;
   case 9: exit(1);
  }
 }
}

