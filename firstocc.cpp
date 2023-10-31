int main()
{
	int i,n,k,j;
	printf("Enter even n value");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);		
	}
	int c=0;

	for(i=0;i<n;i++){
	
		for(j=i+1;j<n;j++){
			if (a[i]==a[j])
			k=a[i];
			c++;}
	if (c>0){
	
	printf("%d",k);
	break;}
}
}
