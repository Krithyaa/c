#include <stdio.h>
int main()
{
	int s=0,i,n,a[n],max,min;
	printf("Enter n value");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);		
	}
	/*
	for(i=0;i<n;i++){
		printf("%d",a[i]);}*/
	min=a[0];
	for(i=1;i<n;i++){
		if (a[i]<min)
		min=a[i];
		
	}
	
	printf("Min value is %d",min);
	
	max=a[0];
	for(i=1;i<n;i++){
		if (a[i]>max)
		
		max=a[i];
		
	}
	printf("Max values is %d",max);
	
	for(i=0;i<n;i++){
		s=s+a[i];
	}
	printf("Sum is %d",s);
	printf("Average is %d",s/n);
	return 0;
	
	
	
	}

