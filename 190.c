#include <stdio.h>  
int main() {  
	int n;  
	scanf("%d", &n);  
	int a[100][100] = {0}; 
	for (int i = 0; i < n; i++) {  
		for (int j = 0; j < n; j++) {  
			scanf("%d", &a[i][j]);  
		}  
	}  
	
	int b[100][100];
	for (int i = 0; i < n; i++) {  
		for (int j = 0; j < n; j++) {  
			b[i][j] = a[i][j];  
		}  
	}  
	for (int k = 0; k < n; k++) {  
		for (int i = 0; i < n; i++) {  
			for (int j = 0; j < n; j++) {  
				if (b[i][k] && b[k][j]) {  
					b[i][j] = 1;  
				}  
			}  
		}  
	}   
	for (int i = 0; i < n; i++) {  
		for (int j = 0; j < n; j++) {  
			printf("%d ", b[i][j]);  
		}  
		printf("\n");  
	}  
	return 0;  
}
