#include <stdio.h>
int main()
{
	int n,a[30],k,j,i,max=0,min=1000;
	scanf("%d",&n); 
	for(i=0;i<n;i++)
		scanf("%d",&a[i]); 
	
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{	
			max=a[i];
			k=i;       
		}
		if(a[i]<min)
		{
			min=a[i];
			j=i;      
		}
	}
	int x,y;
	if(max==a[0]||min==a[n-1]) 
	{                       
		x=a[0],a[0]=min,a[j]=x;
		y=a[n-1],a[n-1]=max,a[j]=y;
	}
	else             
	{
		x=a[0],a[0]=min,a[j]=x;
		y=a[n-1],a[n-1]=max,a[k]=y;
	}
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	return 0;
} 
