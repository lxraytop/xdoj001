#include <stdio.h>
#include <math.h>
int main()
{
	int n,m,a[100],i,j,y;
	scanf("%d %d",&n,&m);
	for(i=0;i<pow(2,n);i++)
		scanf("%d",&a[i]);
	y=pow(2,n);           
	for(j=0;j<m;j++)     
	{
		for(i=0;i<y/2;i++)   
		{
			a[i]=a[i]+a[y-i-1]; 
		}
		y=y/2;
	}
	for(i=0;i<pow(2,n)/(pow(2,m));i++)  
		printf("%d ",a[i]);
	return 0;
}
