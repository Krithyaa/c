#include <stdio.h>
int main()
{
	int i,n,j,s;
	printf("enter n value");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{   for(s=0;s<n-i-1;s++)
            printf(" ");	
	{       for(j=0;j<i+1;j++) {
	
	            if (i%2==0)
                    printf("*");
                else
                    printf("-");}
			    printf("\n");
	}
	}
    for(int i=0;i<n-1;i++)
	{   for(s=0;s<i+1;s++) 
            printf(" ");	
	{       for(j=0;j<n-1-i;j++) {
	
                if (i%2==0)
                    printf("-");
                else
                    printf("*");}
			    printf("\n");
	}
	}
}
