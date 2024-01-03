#include <stdio.h>
int main()
{
	int n,a[100],sum=0,i,m,x,t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=1;i<n;i++)
	{
		m=a[i],x=a[i-1];
		while(x!=0)
		{
			t=m%x;
			m=x;
			x=t;
		}
		sum=sum+a[i]*a[i-1]/m;
	}
	printf("%d",sum);
	return 0;
}
