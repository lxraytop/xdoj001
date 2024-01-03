#include <stdio.h>
int main()
{
	int a,b,i,j=0,k=0,l=0,max=0,s[6]={0},x,y;
	scanf("%d %d",&a,&b);
	x=a>b?a:b;
	y=a<b?a:b;
	
	for(i=y;i<=x;i++)
	{
		if(i%3==0)
			j++;       
		if(i%4==0)                       
			k++;
		if(i%5==0&&i%2!=0)
			l++;
	}
	
	s[0]=j%k,s[1]=k%j,s[2]=j%l; 
	s[3]=l%j,s[4]=k%l,s[5]=l%k;
	max=s[0];
	
	for(i=1;i<6;i++)
	{
		if(s[i]>max)     
			max=s[i];
	}
	
	printf("%d %d %d\n%d",j,k,l,max);
	
	return 0;
}
