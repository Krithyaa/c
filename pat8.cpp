#include <stdio.h>
int main()
{
	int i,n,j,s;
	printf("enter n value");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{   for(s=0;s<n-1-i;s++){
		printf(" ");
	}
	        
	    {   for(j=0;j<n;j++)
                printf("*");
						}
		printf("\n");
	}
	
}
