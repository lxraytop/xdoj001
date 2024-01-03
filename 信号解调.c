#include <stdio.h>
int main()
{
	int n,i,a[50],x,y;
	scanf("%d",&n);
	for(i=0;i<2*n;i++)
		scanf("%d",&a[i]); 
	for(i=0;i<2*n;i=i+2)    
	{
		x=(a[i]-4)*(a[i]-4)+(a[i+1]-4)*(a[i+1]-4);
		y=(a[i]+4)*(a[i]+4)+(a[i+1]+4)*(a[i+1]+4);
		
		if(x<y)
			printf("1 ");
		else
			printf("2 ");
	}
	return 0;
}
