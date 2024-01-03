#include <stdio.h>
#include <string.h>
int main()
{
	char a[70],b[70];
	int i;
	fgets(a,70,stdin);
	for(i=0;i<strlen(a);i++)        
	{
		
		if(a[i]>='A'&&a[i]<'N')     
			b[i]=a[i]+13;             
		else if(a[i]>='M'&&a[i]<='Z') 
			b[i]=a[i]-13;
		else if(a[i]>='a'&&a[i]<'n')
			b[i]=a[i]+13;
		else if(a[i]>='m'&&a[i]<='z')
			b[i]=a[i]-13;
		else                   
			b[i]=a[i];
	} 
	
	for(i=0;i<strlen(a);i++)
		printf("%c",b[i]);
	return 0;
}
