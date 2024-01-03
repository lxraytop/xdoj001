#include <stdio.h>
#include <string.h>
int main()
{
	char a[30],b[30];
	gets(a),gets(b);
	char *p;
	
	p=strstr(a,b);
	
	if(p==NULL)   
		printf("No!");
	else
		printf("%d",p-a+1);
	
	return 0;
}
