#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
void push(NODE **head,int info)
{
    NODE *ptr,*temp;
    temp=*head;
    ptr=(NODE *)malloc(sizeof(NODE));
    ptr->data=info;
    if(*head==NULL)
    {
        ptr->next=NULL;
        *head=ptr;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=ptr;
        ptr->next=NULL;
    }
}
void pop(NODE **head)
{
    NODE *temp,*loc;
    temp=*head;
    loc=*head;
    if(*head==NULL)
    {
        printf("UNDERFLOW");
    }
    else if(temp->next==NULL)
    {
        *head=NULL;
        free(temp);
    }
    else
    {
        while(temp->next!=NULL)
        {
            loc=temp;
            temp=temp->next;
        }
        loc->next=NULL;
        free(temp);
    }
}
void display(NODE **head)
{
    NODE *temp=*head;
    if(*head==NULL)
    {
        printf("THE STACK IS EMPTY");
    }
    else
    {
        while(temp!=NULL)
        {
            printf("%d\t",temp->data);
		    temp=temp->next;
        }
    }
}
int main()
{
    int ch,D;
    NODE *start=NULL;
    while(1)
    {
        printf("\n1:To Push An Element\n");
        printf("2:To Pop An Element\n");
        printf("3:To Display\n");
        printf("4:To Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("Enter the data to be pushed: ");
            scanf("%d",&D);
            push(&start,D);
            break;
            case 2:
            pop(&start);
            break;
            case 3:
            display(&start);
            break;
            case 4:
            exit(1);
            break;
            default:
            printf("WRONG ENTRY\n");
            break;
        }
    }
    return 0;
}
