#include <stdio.h>
int main(){
	char k;
	char str[]="hello";
	printf("enter k");  
	scanf("%c",&k);
	
	for(int i=0;str[i]!='\0';i++){
		if (k==str[i]){
		
		printf("%d",i);}
		
	}
}
