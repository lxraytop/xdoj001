#include <stdio.h>
int main()
{
	int n,i,p=0,q=0;
	scanf("%d",&n); 
	
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
			p=p+i;   
		else
			q=q+i;   
	}
	
	printf("%d %d",p,q);
	
	return 0;
}
