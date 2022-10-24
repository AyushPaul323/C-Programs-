#include <stdio.h>
#define MAX 10 
int deque[MAX];
int leftt =-1 ;
int rightt = -1 ;

void insertright( ) 
{ 
	int val; 
	printf("\n Enter the value to be added:" ); 
	scanf("%d",&val); 
	if ( (leftt == 0 && rightt == MAX-1 ) || (leftt == rightt+1) )
	{  
		printf("\n OVERFLOW");
	    return; 
	}
	if (leftt == -1) 	// Queue is Empty Inititally
	{  
		leftt = 0;  
		rightt = 0;
    } 
	else 
	{
  		if (rightt == MAX-1) 	//right is at last position of queue    
			rightt = 0;
	  	else   
	  		rightt = rightt+1; 
	} 
	deque[rightt] = val ; 
} 
void insertleft( ) 
{ 
	 int val;
	 printf("\n Enter the value to be added:"); 
	 scanf("%d",&val); 
	if( (leftt ==0 && rightt == MAX-1) || (leftt == rightt+1) )
	{  
	 	printf("\n OVERFLOW");  
		return; 
	}
	if (leftt == -1)			//If queue is initially empty
	{  
		leftt = 0;  
		rightt = 0; 
	} 
	else 
	{  
		if(leftt == 0)
		    leftt = MAX - 1 ;  
		else   
		    leftt = leftt - 1 ; 
	} 
	deque[leftt] = val; 
}
void deleteleft( ) 
{ 
	if ( leftt == -1 ) 
	{  
		printf("\n UNDERFLOW");  
		return ; 
	}
	printf("\n The deleted element is : ", deque[leftt]);
	if (leftt == rightt) 										 
	{  
		leftt = -1 ;  
		rightt = -1 ; 
	} 
	else 
	{  
		if ( leftt == MAX - 1 )   
		    leftt = 0;  
		else   
		    leftt = leftt+1; 
	} 
} 	
void deleteright() 
{ 
	if ( leftt == -1 ) 
	{  
		printf("\n UNDERFLOW");
		return ; 
	} 
	printf("\n The element deleted is : ",deque[rightt]); 
	if (leftt == rightt) 											
	{  	
		leftt = -1 ;  
		rightt = -1 ; 
	} 
	else 
	{  
		if (rightt == 0)   
			rightt = MAX - 1 ;  
		else   
			rightt = rightt - 1 ; 
	} 
} 
void display( ) 
{ 
	int front = leftt, rear = rightt;
	if ( front == -1 ) 
	{  
	 	printf("\n QUEUE IS EMPTY");  
		 return; 
	} 
	printf("\n The elements of the queue are : ");
	if (front <= rear ) 
	{  
		while (front <= rear)  
		{   
			printf(" %d",deque[front]);   
			front++;  
		} 
	} 
	else 
	{  
		while (front <= MAX - 1)  
		{   
			printf("%d",deque[front]);   
			front++;  
		}  
		front = 0;  
		while (front <= rear)  
		{   
			printf("%d",deque[front]);   
			front++;  
		} 
	} 
}

void inputdeque( ) 
{ 
	int option;
	do 
	{  
		printf("\n\n INPUT RESTRICTED DEQUE");  
		printf("\n 1.Insert at right");  
		printf("\n 2.Delete from left");  
		printf("\n 3.Delete from right");  
		printf("\n 4.Display");  
		printf("\n 5.Quit");  
		printf("\n Enter your option : ");  
		scanf("%d",&option);  
		switch (option)  
		{   
			case 1:    insertright();    
					break;   
			case 2:    deleteleft();    
					break;   
			case 3:    deleteright();    
					break;   
			case 4:    display();    
					break;  
		} 
	} while (option!=5);
} 

void outputdeque( ) 
{ 
	int option; 
	do 
	{  
		printf("\n\n OUTPUT RESTRICTED DEQUE");  
		printf("\n 1.Insert at right");  
		printf("\n 2.Insert at left");  
		printf("\n 3.Delete from left");  
		printf("\n 4.Display");  
		printf("\n 5.Quit");  
		printf("\n Enter your option : ");  
	scanf("%d",&option); ;   
		switch(option)  
		{   
			case 1:    insertright();
			  	    	break;   
			case 2:    insertleft();    
					break;   
			case 3:    deleteleft(); 
			   		break;   
			case 4:    display();    
					break;  
		}
	}while (option!=5); 
} 


int main( ) 
{ 
	int option; 
	printf("\n ----MAIN MENU----"); 
	printf("\n 1.Input restricted deque"); 
	printf("\n 2.Output restricted deque"); 
	printf("\n Enter your option : "); 
	scanf("%d",&option); 
	switch (option) 
	{  
		case 1:   inputdeque();   
			    	break;  
		case 2:   outputdeque();   
				break; 
	} 
	return 0;
} 

