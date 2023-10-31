#include <stdio.h>
int main()
{
	int i,n,t;
	printf("Enter even n value");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);		
	}
	for(i=0;i<n;i=i+2){
		t=a[i];
		a[i]=a[i+1];
		a[i+1]=t;
		
	}
	for(i=0;i<n;i++){
		printf("%d",a[i]);}}
