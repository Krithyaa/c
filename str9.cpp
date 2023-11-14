#include <stdio.h>
int main(){
	char a[100],k[100];
	fflush(stdin);
	printf("enter a");  
	scanf("%s",a);
	int i,p,q;
	
	
	for(i=0;a[i]!='\0';i++){
		if (a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'){
			printf("%c",a[i]);
		}
	}
}
