#include<stdio.h>
#include<string.h>
int main()
{
	char a[30],b[30],c[30];
	gets(a),gets(b);
	int m ;
	scanf("%d", &m);
	strcpy(c,a+m);  
	strcpy(a+m,b);
	strcat(a,c); 
	puts(a);
	return 0;
}
