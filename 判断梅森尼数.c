#include <stdio.h>
#include <math.h>
int main()
{
	int n,m,arr[100000];
	scanf("%d",&n);
	m = pow(2,n)-1;
	//找质数
	int i = 0,j=0,flag1=0;
	for(i=2;i<=pow(2,n);i++) 
	{
		int flag = 0;
		for(j=3;j<sqrt(i);j++)
		{
			if(i%j==0)
			{
				flag=1;
			}
		}
		if(flag==0)
		{
			arr[flag1++]=i;
		}
	}
	int flag = 0;
	for(i=0;i<=flag1;i++)
	{
		if(m==arr[i])
		{
			printf("%d 1",m);
			flag = 1;
		}
	}
	if(flag==0)
		printf("%d 0",m);
	return 0;
}
