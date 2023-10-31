#include <stdio.h>
int main()
{
	int i,n,k,j;
	printf("Enter even n value");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);		
	}
	
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if (a[i]==a[j])
			a[i]=-1;	}}
	for(i=0;i<n;i++){
		if (a[i]!=-1)
		printf("%d",a[i]);}

	
	}
