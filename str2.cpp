#include <stdio.h>
int main(){
	char str[]="hello";
	char s[10];
	int i;	
	for(i=0;str[i]!='\0';i++){
		s[i]=str[i];
	}
	s[i]='\0';
	printf("%s",s);
	
}
