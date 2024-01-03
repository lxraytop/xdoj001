#include <stdio.h>
int main()
{
	int i,j,n,m,x,a[50];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]); 
	scanf("%d",&m);
	
	a[n]=m;              
	
	for(i=1;i<n+1;i++)  
	{                    
		for(j=0;j<n+1-i;j++)
		{  
			if(a[j]>a[j+1])
			{
				x=a[j];
				a[j]=a[j+1];
				a[j+1]=x;
			}
		}
	}
	for(i=0;i<=n;i++)   
		printf("%d ",a[i]);
	return 0;
}
