#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int info;
    struct Node *next;
};
typedef struct Node NODE;
NODE *head = NULL;
void insertatbeg()
{
    NODE *ptr;
    int item;
    printf("Enter a value to be added to the linked list\n");
    scanf("%d", &item);
    if (head == NULL)
    {
        ptr = (NODE *)malloc(sizeof(NODE));
        ptr->info = item;
        ptr->next = NULL;
    }
    else
    {
        ptr = (NODE *)malloc(sizeof(NODE));
        ptr->info = item;
        ptr->next = head;
    }
    head = ptr;
}

void insertatend()
{
    NODE *ptr,tmp;
    int item;
    printf("Enter a value to be added to the linked list\n");
    scanf("%d", &item);
    if (head == NULL)
    {
        ptr = (NODE *)malloc(sizeof(NODE));
        ptr->info = item;
        ptr->next = NULL;
        head = ptr;
    }
    else
    {
        ptr = (NODE *)malloc(sizeof(NODE));
        ptr->info = item;
        ptr->next = NULL;
        tmp=head;
        while(tmp->next != NULL)
        {
        	tmp
		}
        
    }
}


void display()
{
    NODE *tmp;
    tmp=head;
    while (tmp!=NULL)
    {
        printf("%d\t\n", tmp->info);
        tmp = tmp ->next;
    }
}
int main()
{
    int ch;
    while (1)
    {
    	printf("Enter 1 for insert from begenning \n 2 for display \n 4 for insertat end \n 5 for exit\n");
    	scanf("%d", &ch);
        switch (ch)
        {
            case 1:
                insertatbeg();
                break;
            case 2:
                display();
                break;
            case 4:
                insertatend();
                break;
            case 5:
            	exit(1);
            	break;
        }
    }
    return 0;
}
