#include<stdio.h>
#include<math.h> // header to include all math function
int main()
{
    float abserror, relerror, percerror, trueval, approxval;
    printf("enter true value");
    scanf("%f",&trueval);
    printf("enter approx value");
    scanf("%f",&approxval);
    abserror=fabs(trueval-approxval); //absolute value 
    relerror=abserror/trueval; // relative error 
    percerror=relerror*100; // percenytage error
    printf("\nabsolute error = %f",abserror);
    printf("\nrelative error = %f",relerror);
    printf("\npercentage error = %f",percerror);
}
