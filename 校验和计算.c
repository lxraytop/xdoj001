#include <stdio.h>
int main()
{
	int n,i,x[30],sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&x[i]);
	
	for(i=0;i<n;i++)
	{
		while(x[i]!=0)   
		{
			sum=sum+x[i]%10;
			x[i]=x[i]/10;    
		}
	}
	
	printf("%d",sum%10);
	
	return 0;
}
