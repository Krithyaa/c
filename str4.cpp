#include <stdio.h>
int main(){
	char str[]="HELLO";
	int i;
	for(i=0;str[i]!='\0';i++){
		str[i]=str[i]+32;
		printf("%c",str[i]);
	}
	
	
}
