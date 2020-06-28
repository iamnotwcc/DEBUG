#include <stdio.h>

int main()
{
    int matrix[100][100];
    int m, n;
    scanf("%d %d", &m, &n);

	int m0 = m, n0 = n;
	int count = m * n;
    for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &matrix[i][j]);
		}
	}
	int i = 0;
    while (count != i) {
        for (int j = n - n0; j < n0 - 1; j++) {
	        printf("%d ", matrix[m - m0][j]);
			i++;
			if (i == count) {
				break;
			}
		}
		if (i == count) {
			break;
		}
	    for (int j = m - m0 + 1; j < m0; j++) {
			printf("%d ", matrix[j][n0 - 1]);
			i++;
			if (i == count) {
				break;
			}
		}
		if (i == count) {
			break;
		}
		n0--;
		for (int j = n0 - 1; j >= n - n0 - 1; j--) {
			printf("%d ", matrix[m0 - 1][j]);
			i++;
			if (i == count) {
				break;
			}
		}
		if (i == count) {
			break;
		}
		m0--;
		for (int j = m0 - 1 ; j >= m - m0; j--) {
			printf("%d ", matrix[j][n - n0 - 1]);
			i++;
			if (i == count) {
				break;
			}
		}
	}

    return 0;
}
