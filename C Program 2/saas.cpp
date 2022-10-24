#include <stdio.h>  
#include <conio.h>  
int main ()  
{   
    int i, j, k, n;  
      
    printf ("Enter the size of the array:\n");  
    scanf (" %d", &n); 
	 int a[n];  
    printf ("\n Enter %d elements of an array: \n ");   
    for ( i=0; i<n; i++)  
    {  
        scanf (" %d", &a[i]);  // 1 2 3 4 5  5=n
    }  
    for ( i=0; i<n; i++)  
    {  
        for ( j=i+1; j<n; j++)  
        {  
            if ( a[i] == a[j])  
            {  
                for ( k=j; k<n-1; k++)  
                {  
                    a[k] = a[k+1];  
                }  
                n--;  
                j--;      
            }  
        }  
    }  
    printf (" \n Array elements after deletion of the duplicate elements: ");
    for ( i=0; i<n; i++)  
    {  
        printf (" %d \t", a[i]);  
    }  
    return 0;  
}  
