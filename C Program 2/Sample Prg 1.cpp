#include <stdio.h>
int main()
{
	int n,t,j,c;
	printf("Enter the nos of test cases");
	scanf("%d",&t);
	int b[t];
	if(t>=1 && t<=50){
	printf("Enter the size of the array");
	scanf("%d",&n);
	int a[n];
	int i=0;
	while(t>0)
	{
	if(n>=1 && n<=50){
	printf("Enter the element of the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int sum=0,pro=1;
	for(i=0;i<n-1;i++)
	{
		sum=sum+a[i];
		pro=pro*a[i];
	}
	if(sum==pro)
	{
		b[c]=n+1;
	}
	c++;
}
	t--;

}	
	for(i=0;i<=c;i++)
	printf("%d",b[c]);
}
}



