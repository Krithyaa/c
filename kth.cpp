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
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if (a[j]>a[j+1])
			{   t=a[j];
			    a[j]=a[j+1];
			    a[j+1]=t;}
			
			
			}
		}
	for(i=0;i<n;i++){
		printf("%d",a[i]);}
	printf("%dth smallest number is %d",k,a[k-1]);
	printf("%dth largest number is %d",k,a[n-k]);
	}
