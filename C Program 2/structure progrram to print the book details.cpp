#include <stdio.h>
#include <string.h>
main()
{
    int n;
    printf("Enter no of records you want in each\n");
    scanf("%d",&n);
    if(n<=0)
    printf("Invalid Input\n");
    else
    {
    
      struct Book1
      {
        int book_id;
        char title[100];
        char author[100];
      };
      struct Book1 b1[n];
      printf("enter %d records for each\n",n);
      int c=0;
      float p;
      printf("ENTER FOR FIRST STRUCTURE\n");
      for(int i=0;i<n;i++)
      {
        printf("\nEnter %d record\n",i+1);
        printf("Enter book id\n");
        scanf("%d",&b1[i].book_id);
        
        printf("Enter the title:\n");
        scanf("%s",&b1[i].title);
        printf("Enter author's name:\n");
        scanf("%s",&b1[i].author);
        
        
      }
      printf("ENTER FOR SECOND STRUCTURE\n");
      struct Book2
      {
        int book_id;
        char subject[100];
        float price;
      };
      struct Book2 b2[n];
      for(int i=0;i<n;i++)
      {
        printf("\nEnter %d record\n",i+1);
        printf("Enter book id\n");
        scanf("%d",&b2[i].book_id);
        printf("Enter the subject:\n");
        scanf("%s",&b2[i].subject);
        printf("Enter price:\n");
        scanf("%f",&p);    
        b2[i].price=p;
      }
      struct Book3 
      {
          int book_id;
          char title[50];
          char author[100];
          char subject[50];
          float price;    
      };
      int x,y;
      for(int i=0;i<n;i++)
      {
          for(int j=0;j<n;j++)
          {
           x=b1[i].book_id;
           y=b2[j].book_id;
         if(x==y)
           c++;
        } 
        
      }
      
      struct Book3 b3[c];
        int k=0;
          for(int i=0;i<n;i++)
        {
            x=b1[i].book_id;
            for(int j=0;j<n;j++)
            {
            y=b2[j].book_id;
            if(x==y)
            {
            
              b3[k].book_id=b1[i].book_id;
              strcpy(b3[k].title,b1[i].title);
              strcpy(b3[k].author,b1[i].author);
              strcpy(b3[k].subject,b2[j].subject);
              b3[k].price=b2[j].price;
              k++;  
              }
          }  
        }    
      
      printf("Final Details of all Common Records\n");
      for(int i=0;i<c;i++)
      {
          printf("No %d Details\n",i+1);
          printf("Book id=%d\n",b3[i].book_id);
          printf("Tile=%s\n",b3[i].title);
          printf("author=%s\n",b3[i].author);
          printf("subject=%s\n",b3[i].subject);
          printf("Price=%f\n",b3[i].price);
      }
      
   }
}
