#include <stdio.h>
#include <math.h>
int main()
{
	float a,r,x[1500];
	int i,k=0;
	scanf("%f %f",&a,&r); 
	x[0]=a;
	for(i=1;i<=999;i++)
	{
		x[i]=r*x[i-1]*(1-x[i-1]);
		if(fabs(x[i]-x[i-1])<0.00001)
		{
			k=0;
			printf("%.4f 1",x[i]);
			break;         
		}
		else
			k=1;
	}
	if(k==1)
		printf("%.4f 0",x[999]);
	
	return 0;
}
