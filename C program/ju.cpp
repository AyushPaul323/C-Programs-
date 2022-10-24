void insertAtPos()
{
    NODE *ptr,*temp;
    temp=head;
    int ex,item;
    printf("Enter the value after a node will be inserted")
    int i=1;
    ptr=(NODE *)malloc(sizeof(NODE));
    ptr->data=item;
    if(*head==NULL)
    {
        ptr->prev=NULL;
        ptr->next=NULL;
        *head=ptr;
    }
    else if(pos==1)
    {
        ptr->prev=NULL;
        ptr->next=*head;
        *head=ptr;
    }
    else
    {
        while(i<(pos-1))
        {
            temp=temp->next;
            i++;
        }
        ptr->prev=temp;
        ptr->next=temp->next;
        temp->next=ptr;
    }
}
