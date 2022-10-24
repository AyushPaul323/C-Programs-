#include<stdio.h>
#include<stdlib.h>
struct node
{
int info;
struct node *next;
};
typedef struct node NODE ;

NODE *head = NULL;

void insertAtBeg()
{
int item;
NODE *ptr;
printf(&quot;\nEnter a value &quot;);
scanf(&quot;%d&quot;,&amp;item);
if(head == NULL)
{
ptr = (NODE *)malloc(sizeof(NODE)); // new node
ptr-&gt;info = item;
ptr-&gt;next = NULL;
}
else
{
ptr = (NODE *)malloc(sizeof(NODE));
ptr-&gt;info = item;
ptr-&gt;next = head;
}
head = ptr;

}
void display()
{
NODE *temp = head;
while(temp != NULL)
{
printf(&quot;%d &quot;,temp-&gt;info);

temp = temp-&gt;next;
}
}
void insertAtEnd()
{
int item;
NODE *ptr,*temp;
printf(&quot;\nEnter a value &quot;);
scanf(&quot;%d&quot;,&amp;item);
if(head == NULL)
{
ptr = (NODE *)malloc(sizeof(NODE)); // new node
ptr-&gt;info = item;
ptr-&gt;next = NULL;
head = ptr;
}
else
{
ptr = (NODE *)malloc(sizeof(NODE));
ptr-&gt;info = item;
ptr-&gt;next = NULL;
temp = head;
while(temp-&gt;next !=NULL)
{
temp = temp-&gt;next;
}
temp-&gt;next = ptr;
}

}

main()
{
int ch;
while(1)
{

printf(&quot;\n\n1. Insert at Begining &quot;);
printf(&quot;\n2. Insert at End&quot;);
printf(&quot;\n3. Display&quot;);

printf(&quot;\n4. Exit&quot;);
printf(&quot;\nEnter your choice &quot;);
scanf(&quot;%d&quot;,&amp;ch);
switch(ch)
{
case 1: insertAtBeg();

break;
case 2: insertAtEnd();
break;

case 3: display();

break;
case 4: exit(1);
break;

}

}

}
