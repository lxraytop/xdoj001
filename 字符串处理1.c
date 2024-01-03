#include <stdio.h>
#include <string.h>
int main()
{
	char a[60];
	gets(a);
	int i,x=0,sum=0;
	for(i=0;i<strlen(a);i++) 
	{
		if(a[i]>='0'&&a[i]<='9')
		{
			x=1;
			sum=sum+a[i]-48;  
		}
		else if(a[i]>='a'&&a[i]<='f')
		{
			x=1;
			sum=sum+a[i]-87;
		}
		else if	(a[i]>='A'&&a[i]<='F')
		{
			x=1;
			sum=sum+a[i]-55;
		}
	}
	if(x==1)
		printf("%d",sum); 
	
	else
		printf("NO");
	return 0;
}
