#include <stdio.h>
int main()
{
	int n,i,k=0,a[50];
	scanf("%d",&n); 
	for(i=0;i<n;i++)
		scanf("%d",&a[i]); 
	
	for(i=0;i<n-2;i++)
	{
		if(a[i]==3&&a[i+1]==5&&a[i+2]==7)
			k++;
	}
	
	printf("%d",k);
	
	return 0;
}
