#include <stdio.h>
#include <math.h>
int main()
{
	int n,x,copy,cnt;
	scanf("%d",&n);
	copy=n;
	x = n*n;
	while(copy)
	{
		copy/=10;
		cnt++;
	}
	int i;
	for(i =0;i<cnt;i++)
	{
		copy+=(x%10)*pow(10,i);
		x/=10;
	}
	if(copy==n)
		printf("%d 1",n);
	else
		printf("%d 0",n);
	return 0;
}
