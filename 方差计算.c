#include <stdio.h>
int main()
{
	int n,i,a[50],q=0,sum=0,x,p;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]); 
	for(i=0;i<n;i++)
		sum=sum+a[i];
	x=sum/n;  
	for(i=0;i<n;i++)
	{
		q=q+(a[i]-x)*(a[i]-x);
	}
	p=q/n;     
	printf("%d",p);
	
	return 0;
}
