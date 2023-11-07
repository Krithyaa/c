#include <stdio.h>
int main(){
	char str[]="hello",st[]="world",s[20];
	
	int i,j;	
	for(i=0;str[i]!='\0';i++){
		s[i]=str[i];
	}
	printf("%d",i);
	for(j=0;st[j]!='\0';j++,i++){
		s[i]=st[j];
	}

	s[i]='\0';
	printf("%s",s);
	
}
