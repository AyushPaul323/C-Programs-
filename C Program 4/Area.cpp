#include <stdio.h>
     mul_table(int N, int i)
    {
        if (i > 10)
            return 0;
         printf("%d X %d = %d\n",N,i,N * i);
         mul_table(N, i + 1);
    }
      main ()
    {
        int N = 0,j;
        printf("Enter the limit");
        scanf("%d",&N);
        for(j=1;j<=N;j++)
        {
        	printf("\n");
           mul_table(j,1);
        }
    }


