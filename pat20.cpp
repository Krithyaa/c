#include <stdio.h>
int main()
{
	int i,n,j;
	printf("enter n value");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++) {
			if (i==j){
				printf("%d",i);}
			else
			    printf("%d*",i);
			}
	printf("\n");}
		 
	for(int i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++) {
			if (j==n-i-1)
			    printf("%d",n-i);
			else
			    printf("%d*",n-i);		}
			
			printf("\n");
	} 
  
}
