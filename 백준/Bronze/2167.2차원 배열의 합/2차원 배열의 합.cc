#include <stdio.h>

int main(void) {
	int n, m, k, i, j, x, y, sum = 0;
	int num[301][301];
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &num[i][j]);
		}
	}
	scanf("%d", &k);
	for (int q = 0; q < k; q++) {
		scanf("%d %d %d %d", &i, &j, &x, &y);
		for (int w = i-1; w <= x-1; w++) {
			for (int e = j-1; e <= y-1; e++) {
				sum += num[w][e];
			}
		}
		printf("%d\n", sum);
		sum = 0;
	}
}