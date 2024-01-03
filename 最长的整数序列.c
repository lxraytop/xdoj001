#include <stdio.h>
int main()
{
	int n,i,k=0,max=0,a[1100];
	scanf("%d",&n); 
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	

	for(i=0;i<n;i++)       
	{
		
		if(a[i]==a[i+1])  
			k++;
		
		else
		{
			if(k>max)      
				max=k;
			k=0;         
		}
	}
	
	printf("%d",max+1);  
	
	return 0;
}
