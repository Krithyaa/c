#include <stdio.h>
int main()
{
	int a,b;
	printf("enter the numbers");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("the two numbers are %d & %d",a,b);
	return 0;
}
