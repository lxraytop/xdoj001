#include <stdio.h>
int main()
{
	int n,i,j,k,max=0,a[1000],p,ff=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);       
	
	for(i=0;i<n;i++)         
	{
		
		k=0;                 
		if(ff!=a[i])           
		{
			
			for(j=0;j<n;j++)
			{
				if(a[j]==a[i])    
					k++;
				ff=a[i];        
			}
		}
		
		else                 
			continue;
		
		if(k>max)          
		{
			max=k;	
			p=a[i];
		}
		else if(k==max)    
		{
			if(a[i]<p)
				p=a[i]; 
		}
	}
	
	printf("%d",p);
	
	return 0;
}
