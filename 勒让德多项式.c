#include <stdio.h>
double leduduo(int n,double x)
{
	if(n==0)
		return 1;
	else if(n==1)
		return x;
	else
		return ((2*n-1)*x*leduduo(n-1,x)-(n-1)*leduduo(n-2,x))/n;
}
int main()
{
	double x;
	int n,i;
	scanf("%d %lf",&n,&x);
	double ret = 0.00;
	for(i=0;i<=n;i++)
	{
		if(i!=0)
			ret+=leduduo(i,x);
	}
	printf("%.4lf",ret);
	return 0;
}
