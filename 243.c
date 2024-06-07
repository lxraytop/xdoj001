#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int start;
	int end;
} Edge;

int compare(const void *a, const void *b) {
	return (*(int*)a - *(int*)b);
}

int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	
	Edge *edges;
	int *degrees;
	
	for (int i = 0; i < m; i++) {
		scanf("%d %d", &edges[i].start, &edges[i].end);
	}

	for (int i = 0; i < n; i++) {
		degrees[i] = 0;
	}
	

	for (int i = 0; i < m; i++) {
		degrees[edges[i].start - 1]++;
		degrees[edges[i].end - 1]++;
	}
	qsort(degrees, n, sizeof(int), compare);
	for (int i = 0; i < n; i++) {
		printf("%d ", degrees[i]);
	}
	
	return 0;
}
