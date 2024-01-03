#include <stdio.h>
int main()
{
	int n,i,j=0,a[40],b[40];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);      
	
	if(n%2!=0)
	{
		for(i=n/2+1;i<n;i++)
			b[j++]=a[i];
		
		b[j++]=a[n/2];    
		
		for(i=0;i<n/2;i++)  
			b[j++]=a[i];
	}
	
	else                  
	{ 
		for(i=n/2;i<n;i++)
			b[j++]=a[i];
		for(i=0;i<n/2;i++)
			b[j++]=a[i];
	}
	
	for(i=0;i<n;i++)     
		printf("%d ",b[i]);
	
	return 0;
}
