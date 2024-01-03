#include <stdio.h>

int main(){
	int a1, a2, n;
	scanf("%d %d %d", &a1, &a2, &n);
	
	int cxk[3000] = {0};
	cxk[0] = a1;
	cxk[1] = a2;
	
	if ((a1 >= 01 && a1 <= 9) && (a2 >= 0 && a2 <= 9) && (n > 0 && n <= 1000)) {
		if (n == 1) {
			printf("%d", a1);
		} else if (n == 2) {
			printf("%d %d", a1, a2);
		} else {
			int kunkun = 2;
			for (int i = 2; i < n; i++) {
				int next = cxk[i - 1] * cxk[i - 2];
				if (next >= 10) {
					cxk[kunkun + 1] = next % 10;
					cxk[kunkun] = next / 10;
					kunkun += 2;
				} else {
					cxk[kunkun++] = next;
				}
			}
			
			for (int i = 0; i < n; i++) {
				printf("%d ", cxk[i]);
			}
		}
	}
	
	return 0;
}
