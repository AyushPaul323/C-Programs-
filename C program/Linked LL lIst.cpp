#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *creation(struct node *head)
{
    int x;
    struct node *newnode,*temp;
    head = 0;
    int choice;
    while(choice)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("\n Enter data:");
        scanf(" %d",&x);
        newnode->data = x;
        newnode->next = 0;
        if (head == 0)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        printf("\n Do you want to continue:");
        scanf(" %d",&choice);
    }
    return head;
}
struct node *insertbeg(struct node *head)
{
    int x;
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));//insert at beginning
    printf("\n Enter data:");
    scanf(" %d",&x);
    newnode->data = x;
    newnode->next = head;
    head = newnode;
    return head;
}
struct node *insertend(struct node *head)
{
    int x;
    struct node *newnode,*temp;
    temp = head;
    while(temp->next !=0)
    {
        temp = temp->next;
    }
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("\n Enter data:");
    scanf(" %d",&x);
    newnode->data = x;
    newnode->next = 0;
    temp->next = newnode;
    return head;
}
struct node *insertpos(struct node *head)
{
    int x;
    int pos;
    int i=1;
    struct node *newnode,*temp;
    printf("\n Enter the position :");
    scanf(" %d",&pos);
    temp = head;
    while(i<pos)
    {
        temp = temp->next;
        i++;
    }
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\n Enter data:");
    scanf(" %d",&x);
    newnode->data = x;
    newnode->next = temp->next;
    temp->next = newnode;
    return head;
}
struct node *deletebeg(struct node *head)
{
    struct node *temp;
    temp = head;
    head = head->next;
    free(temp);
    return head;
}
struct node *deleteend(struct node *head)
{
    struct node *temp, *prevnode;
    temp = head;
    while(temp->next !=0)
    {
        prevnode = temp;
        temp = temp->next;
    }
    if(temp == head)
    {
        head = 0;
    }
    else
    {
        prevnode->next = 0;
        free(temp);
    }
    return head;
}
struct node *deletepos(struct node *head)
{
    int pos;
    int i=1;
    struct node *temp,*nextnode;
    temp = head;
    printf("\n Enter position:");
    scanf(" %d",&pos);
    while(i < pos-1)
    {
        temp = temp->next;
        i++;
    }
    nextnode = temp->next;
    temp->next = nextnode->next;
    free(nextnode);
    return head;
}
void display(struct node *head)
{
    struct node  *temp;
    temp = head;
    while(temp != 0)
    {
        printf(" %d\t",temp->data); 
temp = temp->next;
    }
}
int main()
{
    struct node *head,*newnode,*temp, *prevnode,*nextnode;
    int ch;
    printf("\n _SINGLE LINKED LIST OPERATIONS_");
    printf("\n _1.CREATION_");
    printf("\n _2.INSERT AT BEGINNING_");
    printf("\n _3.INSERT AT END_");
    printf("\n _4.INSERT AT ANY POSITION_");
    printf("\n _5.DELETE FROM BEGINNING_");
    printf("\n _6.DELETE FROM END_");
    printf("\n _ 7.DELETE FROM ANY POSITION__");
    printf("\n__8.DISPLAY__");
    printf("\n__9.EXIT__");
    while(1)
    {
        printf("\n Enter your choice:");
    scanf(" %d",&ch);
        switch(ch)
        {
            case 1:
            {
                head = creation(head);
                break;
            }
            case 2:
            {
                head = insertbeg(head);
                break;
            }
            case 3:
            {
                head = insertend(head);
                break;
            }
            case 4:
            {
                head = insertpos(head);
                break;
            }
            case 5:
            {
                head = deletebeg(head);
                break;
            }
            case 6:
            {
                head = deleteend(head);
                break;
            }
            case 7:
            {
                head = deletepos(head);
                break;
            }
            case 8:
            {
                display(head);
                break;
            }
            case 9:
            {
                exit(0);
            }
            default:
            printf("\n Wrong Choice");
        }
    }
    return 0;
}
