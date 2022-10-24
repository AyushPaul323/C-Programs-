#include<stdio.h>  
#define n 5  
int st1[5],st2[5]; 
int top1=-1,top2=-1;   
int c=0;  
void push1(int item)  
{ 
 	if(top1==n-1)  
	{  
  		 printf("\n Stack is overflow...");  
	}  
	else  
	{  
   		top1++; 
   		st1[top1]=item;
	}  
}  

int pop1()  
{  
	if(top1==-1)  
	{  
   		printf("\nStack is empty..");  
	}  
	else  
	{  
   		int a=st1[top1];  
   		top1--;  
   		return a;   
	}  
}   
void push2(int x)  
{  
	if(top2==n-1)  
	{  
   		printf("\nStack is full..");  
	}  
	else  
	{  
    	top2++;    
    	st2[top2]=x;  
  	}  
}   

int pop2()  
{  
   int ele=st2[top2]; 
   top2--;  
   return ele;  
}   
void enqueue(int x)  
{  
    push1(x);  
    c++;  
}  
void dequeue()  
{  
   if((top1==-1) && (top2==-1))  
	{  
   		printf("\nQueue is empty");  
	}  
else  
{  
  for(int i=0;i<c;i++)  
  {  
     int ele = pop1();  
     push2(ele);  
  }  
int b= pop2();  
printf("\nThe dequeued element is %d", b);  
printf("\n");  
c--;  
	for(int i=0;i<c;i++)  
	{  
   		int a=pop2();  
   		push1(a);   
	}  
}
}   
void display()  
{  
   for(int i=0;i<=top1;i++)  
  {  
     printf("%d ", st1[i]);  
  }  
}  
int main()  
{  
   enqueue(10);  
   enqueue(20);  
   enqueue(30);  
   dequeue();  
   enqueue(40);  
   display();  
}  
