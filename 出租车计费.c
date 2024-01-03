#include <stdio.h>
int main()
{
	int n;
	float m,sum=0,a=0;
	scanf("%f %d",&m,&n);
	
	if(m<=3)
		sum=10;
	else if(m>3)
		sum=10+2*(m-3);
	if(m>10)   
		a=(m-10)*1;
	
	sum=sum+a+n/5*2 ;
	printf("%.1f",sum);
	
	return 0;
} 
