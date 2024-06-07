#include <stdio.h>

int main(){
	int p,q;
	scanf("%d %d",&p,&q);
	printf("%d\n",(int)p&q);
	printf("%d\n",(int)p||q);
	printf("%d\n",(int)!p||q);
	printf("%d\n",(int)p==q);                                                                                                                                               
	return 0;
}
