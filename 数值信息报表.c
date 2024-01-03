#include <stdio.h>
int main()
{
	int n,i,q,p,min=100000,max=0,sum=0,x[60];
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
		scanf("%d",&x[i]);
	
	for(i=0;i<n;i++)
	{
		sum=sum+x[i];
		if(x[i]>max)
		{
			max=x[i];
			q=i+1;  
		}
		if(x[i]<min)
		{
			min=x[i];
			p=i+1;
		}
	}
	
	printf("%d %d %d %d %d",sum,max,q,min,p);
	
	return 0;
}
