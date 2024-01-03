#include<stdio.h>
#include<string.h>
int main()
{
	int n,nm;
	scanf("%d %d",&n,&nm );
	int i=0,num[100]={0},kun[100];
	while(i<n)
	{
		scanf("%d",&num[i]);
		i++;
	}
	
	kun[0]=num[nm-1];
	
	for(i=1;i<n;i++)
	{
		for(int c=0;c<n-i;c++)
		{
			if(num[c]>num[c+1])
			{
				nm=num[c];num[c]=num[c+1];num[c+1]=nm;
			}
		}
	} 
	
	i=0;
	float cxk=0,sum=0;
	if(kun[0]==num[0])
	{
		while(i<n-1){
			sum=sum+num[i];i++;
		}
		cxk=sum/(n-1.00);
		printf("%.2lf",cxk);
	}
	else if(kun[0]==num[n-1])
	{
		i = 1;
		while(i<n)
		{
			sum=sum+num[i];i++;
		}
		cxk=sum/(n-1.00);
		printf("%.2lf",cxk);
	} 
	else if(kun[0]!=num[0]&&kun[0]!=num[n-1])
	{
		i = 1;
		while(i<n-1){
			sum=sum+num[i];
			i++;
		}
		cxk=sum/(n-2.00);
		printf("%.2lf",cxk);
	}
	return 0;
}
