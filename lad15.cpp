#include <stdio.h>
int main()
{
	int a,b,c;
	printf("enter the numbers");
	scanf("%d%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("the two numbers are %d & %d",a,b);
	return 0;
}
	
