#include <stdio.h>
#include <string.h>
int main(){
	int i,n,z;
	char a[100],k[100];
	fflush(stdin);
	printf("enter a");  
	scanf("%s",a);
	strcpy(k,a);
	for(n=0;a[n]!='\0';n++);
	
	for(i=0;a[i]!='\0';i++){
		if (a[i]!=a[n-i-1]){
			z=1;
		}
		
	}

	
	if (z==1){
	
	printf("not palindrome");}
	else {
	
	printf("palindrome");}
}
