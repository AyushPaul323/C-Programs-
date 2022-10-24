#include<stdio.h>  
#include<stdlib.h>  
typedef struct node  
{	
      int data;  
      struct node *prev,*next;
}LL;  
LL *head=NULL;	
void ins_beg();  
void ins_last();  
void del_beg();  
void del_last();  
void display();  
void search();  
int main()  
{
      int ch;  
      while(1)  
      {
	      puts("ENter 1 to insert at beginning");
	      puts("ENter 2 to insert at last");
	      puts("ENter 3 to delete at beginning");
	      puts("ENter 4 to delete at end");
	      puts("Enter 5 to search");
	      puts("ENter 6 to display");
	      puts("ENter 7 to exit");
              printf("Enter your choice: ");  
              scanf("%d",&ch);  
              switch(ch)  
              {  
                      case 1:  
                	     ins_beg();  
               		     break;  
                      case 2:  
                             ins_last();  
                	     break;  
                      case 3:  
                	     del_beg();  
                	     break;  
                      case 4:  
                	     del_last();  
                             break;  
                      case 5:  
                   	     search();  
                     	     break;  
                      case 6:  
                 	     display();  
                 	     break;  
                      case 7:return 0;  
                      default:puts("ERROR! Wrong Choice");
	      }
      }
}
void ins_beg()  
{
       LL *ptr,*temp;   
       int item;  
       ptr=(LL*)malloc(sizeof(LL));  
       printf("Enter value: ");  
       scanf("%d",&item);  
       ptr->data=item;  
       if(head==NULL)  
       {  
             head=ptr;  
             ptr->next=head;   
             ptr->prev=head;   
       }  
       else   
       {  
             temp=head;   
             while(temp->next!=head)  
             {
                   temp=temp->next;   
             }  
             temp->next=ptr;  
             ptr->prev=temp;  
             head->prev=ptr;  
             ptr->next=head;  
             head=ptr;  
       }
}  
void ins_last()  
{  
       LL *ptr,*temp;  
       int item;  
       ptr=(LL *)malloc(sizeof(LL));  
       printf("Enter value: ");  
       scanf("%d",&item);  
       ptr->data=item;  
       if(head==NULL)  
       {  
               head = ptr;  
               ptr -> next = head;   
               ptr -> prev = head;   
       }  
       else  
       {  
              temp = head;  
              while(temp->next !=head)  
              {
                    temp = temp->next;  
              }  
              temp->next = ptr;  
              ptr ->prev=temp;  
              head -> prev = ptr;  
              ptr -> next = head;
       }
}  
void del_beg()  
{
      LL *temp;  
      if(head->next == head)  
      {  
              head = NULL;   
              free(head);  
      }  
      else  
      {  
              temp = head;   
              while(temp -> next != head)  
              {  
                      temp = temp -> next;  
              }  
              temp -> next = head -> next;  
              head -> next -> prev = temp;  
              free(head);  
              head = temp -> next;
      }
}  
void del_last()  
{  
        LL *ptr;  
        if(head->next == head)  
        {
              head = NULL;   
              free(head);   
        }  
        else   
        {  
              ptr=head;   
              if(ptr->next!= head)  
              {
                   ptr=ptr->next;   
              }  
              (ptr->prev)->next=head;  
              head->prev=ptr->prev;    
              free(ptr);
	}
}	
void display()  
{
      LL *ptr;  
      ptr=head;  
      if(head == NULL)  
      {
            puts("Empty list");  
      }     
      else  
      {          
           while(ptr -> next != head)  
           {
                 printf("%d\n", ptr -> data);  
                 ptr = ptr -> next;  
           } 
		   printf("%d\n", ptr -> data); 
       }  
}  
void search()  
{
      LL *ptr;  
      int item,i=0,flag=1;  
      ptr=head;   
      printf("Enter item to search: ");   
      scanf("%d",&item);  
      if(head->data==item)  
      {
            printf("Found at location %d",i+1);  
            flag=0;  
      }  
      else   
      {  
            while(ptr->next!=head)  
            {
                  if(ptr->data== item)  
                  {
                        printf("Found at location %d ",i+1);  
                        flag=0;  
                        break;  
                  }   
                  else  
                  {  
                        flag=1;  
                  }   
                  i++;  
                  ptr = ptr -> next;  
            }  
       }  
       if(flag != 0)  
       {  
             puts("Item not found");  
       }  
}
