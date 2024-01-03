#include <stdio.h>
int main()
{
	int n,i,j,x,y,a[150],b[150];
	scanf("%d",&n); 
	for(i=0;i<n;i++)
		scanf("%d",&a[i]); 
	for(i=0;i<n;i++)
		b[i]=i+1;        
	
	for(i=1;i<n;i++)       
	{
		for(j=0;j<n-i;j++)
		{
			if(a[j]>a[j+1])
			{
				x=a[j],y=b[j];          
				a[j]=a[j+1],b[j]=b[j+1];
				a[j+1]=x,b[j+1]=y;	
			}
		}
	}
	
	int p=0,m=0;
	m=a[1]-a[0];
	for(i=2;i<n;i++)
	{
		if(m==a[i]-a[i-1]) 
			p=1;
		else                  
		{
			p=0;
			break; 
		}
	}
	
	if(p==1)               
	{
		for(i=0;i<n;i++)
			printf("%d ",b[i]);
	}
	
	else                   
	{
		int max=a[1]-a[0],min=a[1]-a[0];
		for(i=2;i<n;i++)
		{
			if(a[i]-a[i-1]>max)
				max=a[i]-a[i-1];
			if(a[i]-a[i-1]<min)
				min=a[i]-a[i-1];
		}
		printf("%d %d",max,min);
	}
	
	return 0;
} 
