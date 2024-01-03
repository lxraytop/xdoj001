#include <stdio.h>
#include <math.h>
int main()
{
	int n,i,k=0;
	double sum=0,X=0,E=0,s=0,x[110]={0};
	scanf("%d",&n); 
	
	for(i=0;i<n;i++)
	{
		scanf("%lf",&x[i]);
		sum=sum+x[i];       
	}
	
	X=sum/n;               
	
	for(i=0;i<n;i++)
		E=E+(x[i]-X)*(x[i]-X);  
	
	s=sqrt(E/(n-1));     
	
	for(i=0;i<n;i++)
	{
		if(x[i]<(X-3*s)||x[i]>(X+3*s))
			k++;
	}
	
	printf("%.4lf %d",s,k);
	
	return 0;
}
