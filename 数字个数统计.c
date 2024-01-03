#include <stdio.h>
int main()
{
	int n,i,j=0,k=0,l=0,max,x,y,z;
	scanf("%d",&n);
	for(i=n;i<=n*n;i++)
	{
		if(i%2==0)
			j++;
		else     
			k++;
		if(i%4==0&&i%3!=0)
			l++;                    
	}	
	x=j+k,y=j+l,z=k+l;	
	max=x>y?x:y;   
	max=max>z?max:z;	
	printf("%d %d %d\n%d",k,j,l,max);	
	return 0;
}
