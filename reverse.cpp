#include <stdio.h>
int main()
{
	int i,n,t,p,q;
	printf("Enter even n value");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);		
	}
	p=0;
	q=n-1;
	for(i=0;i<(n+1)/2;i++){
		t=a[p];
		a[p]=a[q];
		a[q]=t;
		p++;
		q--;}
	for(i=0;i<n;i++){
		printf("%d",a[i]);}
		
		
	}
