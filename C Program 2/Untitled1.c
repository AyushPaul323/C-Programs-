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
void display()
{
    NODE *t=head;
    if (t!=NULL)
    {
        printf("%d\t\n", t->info);
        t=t->next;
    }
}
int main()
{
    int ch;
    while (1)
    {
    	printf("Enter 1 for insert from begenning \n 2 for display \n 3 for exit the choice \n");
    	scanf("%d", &ch);
        switch (ch)
        {
            case 1:
                insertatbeg();
                break;
            case 2:
                display();
                break;
            case 3:
                exit(1);
                break;
        }
    }
    return 0;
}
