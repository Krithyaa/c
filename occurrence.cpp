#include <stdio.h>
int main()
{
	int i,n,k,j,t;
	printf("Enter even n value");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);		
	}
	printf("Enter k value");
	scanf("%d",&k);
	int c=0;
	for(i=0;i<n;i++){
		if (k==a[i])
		c++;
	}
	printf("%d",c);}
