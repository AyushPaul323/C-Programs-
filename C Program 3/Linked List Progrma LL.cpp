#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *next;
};
typedef struct node NODE;
NODE *head = NULL;
NODE *head_1 = NULL;
NODE *head_2 = NULL;
NODE *a, *b;
void insertatbeg()
{
    int item;
    NODE *ptr;
    printf("Enter a value");
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
    int item;
    NODE *ptr, *tmp;
    ptr = (NODE *)malloc(sizeof(NODE));
    printf("Enter a value");
    scanf("%d", &item);
    tmp = head;
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
        tmp = head;
        while (tmp->next!= NULL)
        {
            tmp = tmp->next;
        }
        tmp->next = ptr;
    }
}
void deletefrombeg()
{
    NODE *ptr;
    if (head == NULL)
    {
        printf("Empty node");
    }
    else
    {
        ptr = head;
        head = head->next;
        free(ptr);
    }
}
void deletefromend()
{
    NODE *ptr, *loc;
    if (head == NULL)
    {
        printf("Empty node");
    }
    else if (head->next == (NODE *)NULL)
    {
        ptr = head;
        head = NULL;
        free(ptr);
    }
    else
    {
        loc = head;
        ptr = head->next;
        while (ptr->next != NULL)
        {
            loc = ptr;
            ptr = ptr->next;
        }
        loc->next = NULL;
        free(ptr);
    }
}
void search()
{
    NODE *ptr = head;
    int KEY, flag = 0;
    printf("Enter a value");
    scanf("%d", &KEY);
    if (head == NULL)
        printf("Empty Node");
    else
    {
        while (ptr != NULL)
        {
            if (ptr->info == KEY)
            {
                printf("exist");
                flag = 1;
                break;
            }
            else
            {
                ptr = ptr->next;
            }
        }
        if (flag == 0)
            printf("Not exist");
    }
}
void reverse()
{
    NODE *prev = NULL;
    NODE *current = head;
    NODE *next = NULL;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}

void insertatanypos()
{
    int item;
    printf("Enter a value");
    scanf("%d", &item);
    NODE *ptr = (NODE *)malloc(sizeof(NODE));
    NODE *temp;
    int i, loc;
    if (ptr == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {

        printf("Enter the location");
        scanf("%d", &loc);
        ptr->info = item;
        temp = head;
        for (i = 0; i < loc; i++)
        {
            temp = temp->next;
            if (temp == NULL)
            {
                printf("\ncan't insert\n");
                return;
            }
        }
        ptr->next = temp->next;
        temp->next = ptr;
        printf("\nNode inserted");
    }
}

void deletefromanypos()
{
    NODE *temp = head;
    int pos;
    printf("Enter where you want to delete a value");
    scanf("%d", &pos);
    int i;
    if (pos == 0)
    {
        printf("\nElement deleted is : %d\n", temp->info);
        head = head->next;
        temp->next = NULL;
        free(temp);
    }
    else
    {
        for (i = 0; i < pos - 1; i++)
        {
            temp = temp->next;
        }
        NODE *del = temp->next;
        temp->next = temp->next->next;
        printf("\nElement deleted is : %d\n", del->info);
        del->next = NULL;
        free(del);
    }
}

void insert_concat_LL1()
{
    int item;
    NODE *ptr;
    printf("\nEnter the value to be inserted for LL1: ");
    scanf("%d", &item);
    if (head_1 == NULL)
    {
        ptr = (NODE *)malloc(sizeof(NODE));
        ptr->info = item;
        ptr->next = NULL;
    }
    else
    {
        ptr = (NODE *)malloc(sizeof(NODE));
        ptr->info = item;
        ptr->next = head_1;
    }
    head_1 = ptr;
}

void insert_concat_LL2()
{
    int item1;
    NODE *ptr1;
    printf("\nEnter the value to be inserted for LL2: ");
    scanf("%d", &item1);
    if (head_2 == NULL)
    {
        ptr1 = (NODE *)malloc(sizeof(NODE));
        ptr1->info = item1;
        ptr1->next = NULL;
    }
    else
    {
        ptr1 = (NODE *)malloc(sizeof(NODE));
        ptr1->info = item1;
        ptr1->next = head_2;
    }
    head_2 = ptr1;
}

void concat()
{
    NODE *temp = head_1;
    if (head_1 == NULL)
    {
        printf("LINKED LIST 1 IS EMPTY");
    }
    else if (head_2 == NULL)
    {
        printf("LINKED LIST 2 IS EMPTY");
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = head_2;
    }
}

void display_concat_LL()
{
    NODE *temp;
    int choice;
    printf("\n1:For Displaying Linked List \n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        temp = head_1;
        if (head_1 == NULL)
        {
            printf("LIST IS EMPTY");
        }
        else
        {
            while (temp != NULL)
            {
                printf("%d  ", temp->info);
                temp = temp->next;
            }
        }
        break;
    default:
        printf("WRONG ENTRY");
        break;
    }
}

void display()
{
    NODE *t = head;
    if(t== NULL)
    printf("empty linked list");
    while (t != NULL)
    {
        printf("%d  ", t->info);
        t = t->next;
    }
}

int main()
{
    int ch;
    while (true)
    {
        printf("\n Enter a choice enter 1 for insert at beg \n enter 2 for insert at the end \n 3 for dispaly the list \n 4 for delete from beg \n 5 for delete from end \n 6 for Search \n 7 for reverse\n 8 for insert at any pos \n 9 for delete from any position \n 10 for concat \n 11 for exit \n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insertatbeg();
            break;
        case 2:
            insertatend();
            break;
        case 3:
            display();
            break;
        case 4:
            deletefrombeg();
            break;
        case 5:
            deletefromend();
            break;
        case 6:
            search();
            break;
        case 7:
            reverse();
            break;
        case 8:
            insertatanypos();
            break;
        case 9:
            deletefromanypos();
            break;
        case 10:
            int i;
            while (1)
            {
                printf("Press 1 for insert linked list in LL1 and 2 for insert linked list in LL2 and 3 for concat and display 4 for exit");
                scanf("%d", &i);
                switch (i)
                {
                case 1:
                    insert_concat_LL1();
                    break;
                case 2:
                    insert_concat_LL2();
                    break;
                case 3:
                    concat();
                    display_concat_LL();
                    break;
                case 4:
                    //exit(1);
                    break;
                default:
                    printf("Wrong Choice!!!");
                }
                if(i==4)
                break;
            }
            break;
        case 11:
            exit(true);
            break;
        default:
            printf("Wrong choice");
        }
    }
    return 0;
}

