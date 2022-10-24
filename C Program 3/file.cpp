#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main(int argc,char *argv[])
{
    if(argc<2)
    printf("One Argument Expected\n");
    else
    {
        int x;
        x=atoi(argv[1]);
        switch(x)
        {
            case 1:
            {
               printf("Result for Case 1 is:\n");
               for(int k=2;k<=3;k++)
               {
                printf("Address of each character of string:%s\n",argv[k]);
                int l=strlen(argv[k]);
                for(int i=0;i<l;i++)
                {
                   printf("Address of %c is=%u\n",argv[k][i],&argv[k][i]);
                }
               }
            }
            break;
            case 2:
            {
                printf("Result for Case 2 is:\n");
                int j=0,k=0,i;
                char s3[200];
                while(argv[2][j]!='\0')
                {
                  s3[k]=argv[2][j];
                  j++;
                  k++;
            
                }
        
                int l1;
                l1=strlen(argv[3]);
                for(i=0;i<l1;i++)
                {
                  s3[k]=argv[3][i];
                  k++;
                }
                printf("Concatenated without using function=%s",s3);
            }
            break;
            case 3:
            {
                printf("Result for Case 3 is:\n");
                argv[2]=strcat(argv[2],argv[3]);
                printf("Concatenated using function=%s",argv[2]);
            }
            break;
            case 4:
            {
                int l;
                l=strcmp(argv[2],argv[3]);
                if(l==0)
                printf("Both the strings are same\n");
                else
                printf("Strings are not same\n");
            }
            break;
            case 5:
            {
                printf("Result for Case 5 is:\n");
                int i,j,f=0,l1;
                for(i=2;i<=3;i++)
                {
                    f=0;
                    l1=strlen(argv[i]);
                    for(j=0;j<l1;j++)
                    {
                        if(argv[i][j]=='a'||argv[i][j]=='e'||argv[i][j]=='i'||argv[i][j]=='o'||argv[i][j]=='u')
                        f++;
                    }
                    printf("No of vowels of %s=%d\n",argv[i],f);
                }    
            }
            break;
            case 6:
            {
                printf("Result for Case 6 is:\n");
                argv[2]=strrev(argv[2]);
                printf("Reversed string1=%s\n",argv[2]);
                argv[3]=strrev(argv[3]);
                printf("Reversed string2=%s",argv[3]);
                
            }
            break;
            default:
                printf("Error\n");
            
                
        }
    }
}
