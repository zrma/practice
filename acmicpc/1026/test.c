#include <stdio.h>
#include <stdlib.h>

#define LEN 50

int comp(const void *a, const void *b) {
	return *(int *)a - *(int *)b;
}

int comp2(const void *a, const void *b) {
	return *(int *)b - *(int *)a;
}

int main(void) {	
	int n, A[LEN], B[LEN], sum = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		scanf("%d", A + i);

	for (int i = 0; i < n; i++)
		scanf("%d", B + i);

	qsort(A, n, sizeof(int), comp);
	qsort(B, n, sizeof(int), comp2);

	for (int i = 0; i < n; i++)
		sum = sum + A[i] * B[i];
	printf("%d\n", sum);
	return 0;
}

