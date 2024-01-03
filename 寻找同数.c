#include <stdio.h>
#include <string.h>
int main()
{
	char a[4],b[60];
	int i,x,y,k=0;
	gets(a),gets(b);
	x=strlen(a);
	y=strlen(b);
	
	if(x==1) 
	{
		for(i=0;i<y;i++) 
		{
			if(b[i]==a[0])
				k++;
		}
	}
	
	if(x==2) 
	{
		for(i=0;i<y-1;i++) 
		{
			if(b[i]==a[0]&&b[i+1]==a[1])
				k++;
		}
	}
	
	if(x==3){
		for(i=0;i<y-2;i++) 
		{
			if(b[i]==a[0]&&b[i+1]==a[1]&&b[i+2]==a[2])
				k++;
		}
	}
	
	printf("%d",k);
	
	return 0;
}
