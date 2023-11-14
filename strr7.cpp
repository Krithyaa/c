#include <stdio.h>
#include <stdlib.h>
int main(){
	int k;
	char a[100],b[100];
	fflush(stdin);
	printf("enter a");  
	scanf("%s",a);
	printf("enter b");  
	scanf("%s",b);
	
	for(int i=0;a[i]!='\0';i++){
		if (a[i]!=b[i]){
			k=1;
			break;
			}		
	}
	if (k==1)
	printf("strs not equal");
	else
	printf("str equal");
}
