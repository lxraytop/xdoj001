#include <stdio.h>
#include <math.h>
int main()        
{
	int n,p=1,i,k,j=1,y;
	float x=0.0,s=0.0;
	scanf("%d %f",&n,&x);
	for(i=1,y=0;y<n;i=i+2,y++)
	{
		
		for(k=i-1;k<=i&&k>1;k++)
			p=p*k;     
		
		j++;     
		s=s+pow(-1,j)*pow(x,i)/p; 
	}
	printf("%.4f",s);
	return 0;
}
