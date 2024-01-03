#include <stdio.h>
int main()
{
	int n,i,y[50],x[50];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&x[i]);
	
	for(i=1;i<n-1;i++)
	{
		y[i]=(x[i-1]+x[i]+x[i+1])/3;
	} 
	y[0]=y[1];  
	y[n-1]=y[n-2];
	for(i=0;i<n;i++)
		printf("%d ",y[i]);
	
	return 0;
}
