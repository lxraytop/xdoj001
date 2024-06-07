#include <stdio.h>  
int zifan(int ray[][100], int n) {  
	for (int i = 0; i < n; i++) {  
		if (ray[i][i] != 1) {  
			return 0; 
		}  
	}  
	return 1;  
} 
int duichen(int ray[][100], int n) {  
	for (int i = 0; i < n; i++) {  
		for (int j = 0; j < i; j++) { 
			if (ray[i][j] != ray[j][i]) {  
				return 0; 
			}  
		}  
	}  
	return 1; 
}  
int chuandi(int ray[][100], int n) {  
	for (int k = 0; k < n; k++) {  
		for (int i = 0; i < n; i++) {  
			for (int j = 0; j < n; j++) {  
				if (ray[i][k] == 1 && ray[k][j] == 1 && ray[i][j] != 1) {  
					return 0; 
				}  
			}  
		}  
	}  
	return 1;
}  
int main() {  
	int n;  
	scanf("%d", &n);  
	int a[100][100] = {0};   
	for (int i = 0; i < n; i++) {  
		for (int j = 0; j < n; j++) {  
			scanf("%d", &a[i][j]);  
		}  
	}  
	if (zifan(a, n) && duichen(a, n) && chuandi(a, n)) {  
		printf("yes");  
	} else {  
		printf("no");  
	} 
	return 0;  
}
