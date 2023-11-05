#include <stdio.h>
int main()
{
	int i,n,j,start;
	printf("enter n value");
	scanf("%d",&n);
	printf("enter starting value");
	scanf("%d",&start);
	for(int i=0;i<n;i++)
	{
		for(j=0;j<i+1;j++) {
		
			printf("%d",start);}
			start++;
			printf("\n");
	} 
	for(int i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++) {
            printf("%d",start-1);}		
			start--;
			printf("\n");
	} 
  
}
