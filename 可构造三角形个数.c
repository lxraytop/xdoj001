#include <stdio.h>
int main()
{
	int n,i,a[50],x=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n-2;i++)
	{  
		if(a[i]+a[i+1]>a[i+2]&&a[i]+a[i+2]>a[i+1]&&a[i+1]+a[i+2]>a[i])
			x++;
	}
	printf("%d",x);
	
	
	return 0;
}
