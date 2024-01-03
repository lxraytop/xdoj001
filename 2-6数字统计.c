#include <stdio.h>
int main()
{
	int m,k,i=0,j=0,l=0,p=0,a[250]={0};
	scanf("%d %d",&m,&k);
	
	a[1]=2,a[2]=3;                 
	
	for(i=3;i<=k;i++)
		a[i]=(i-1)*(i-1)+3*(i-2)+1; 
	
	for(i=1;i<=k;i++)          
	{
		if(a[i]%m==0)
			j++;
		if(a[i]%m==1)
			p++;
		if(a[i]%m>1)
			l++; 
	}
	
	printf("%d %d %d",j,p,l);
	
	return 0;
}
