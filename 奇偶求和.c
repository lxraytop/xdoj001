#include <stdio.h>
int main()
{
	int n,a[200]={0},max=0,min=0,i,j=0,k=0;
	scanf("%d",&n);
	for(i=1;i<110+2*n;i++)
	{
		a[i]=3*(i-1)*(i-1)+2*(i-1)+1;    
	}
	for(i=8;i<8+n*2;i=i+2)  
		max=max+a[i];         
	for(i=7;i<7+2*n-2;i=i+2) 
		min=min+a[i];           
	printf("%d %d",max,min);
	return 0;
}
