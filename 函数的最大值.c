#include <stdio.h>
int main()
{
	double a,i,f,max=0.0;
	scanf("%lf",&a);
	for(i=0.0;i<=10.0;i=i+0.0001)
	{
		f=-i*i*i+a*i*i;
		if(f>max)    
			max=f;
	}
	printf("%.2lf",max);
	
	return 0;
}
