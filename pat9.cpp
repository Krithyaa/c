#include <stdio.h>
int main()
{
	int i,n,j,s;
	printf("enter n value");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{   for(s=0;s<i;s++)
	        printf(" ");
	    {   for(j=0;j<n;j++)
                printf("*");
				printf("\n");
			}
	}
	
}
