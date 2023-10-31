#include <stdio.h>
int main()
{
	int i,n,s=0,sn=0;
	printf("Enter even n value");
	scanf("%d",&n);
	int a[n-1];
	for(i=0;i<n-1;i++)
	{
		scanf("%d",&a[i]);		
	}
	for(i=0;i<n-1;i++){
		s=s+a[i];
		}
	for(i=1;i<=n;i++){
		sn=sn+i;
	}
	printf("Missing number is %d",sn-s);
		
	}
