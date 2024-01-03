#include <stdio.h>
#include <string.h>
int main()
{
	char s[120],a[120],x;
	int i,k=0,j;
	fgets(s,120,stdin);
	for(i=0;i<strlen(s);i++) 
	{
		
		if(s[i]!='*')
			a[k++]=s[i];
	}
	a[k] = '\0'; 
	
	for(i=1;i<strlen(a);i++)
	{
		for(j=0;j<strlen(a)-i;j++)
		{
			if(a[j]>a[j+1])
			{
				x=a[j];
				a[j]=a[j+1];
				a[j+1]=x;
			}
		}
	}
	
	for(i=0;i<strlen(a);i++)
		printf("%c",a[i]);
	
	return 0;
}
