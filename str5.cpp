#include <stdio.h>
int main(){
	char str[]="hello";
	int i,p,q,n;
	for(n=0;str[n]!='\0';n++);
	printf("length of string %d \n",n);
	for(i=0;i<(n+1)/2;i++){
		p=0;
		q=n-1;
		str[p]=str[q];
		p++;
		q--;
	}

	printf("%s",str);
}
