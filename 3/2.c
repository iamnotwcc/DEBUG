#include <stdio.h>

int main()
{
    int matrix[100][100];
    int m;
    int n;
    scanf("%d %d", &m, &n);
    int k = m * n;
    int m0 = m;
    int n0 = n;
	for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
	int i = 0;
    if (m == 1 || n == 1) {
        for (int i = 0; i < m; i++) {
        	for (int j = 0; j < n; j++) {
				printf("%d", matrix[i][j]);
        		if (j != n - 1) {
					printf(" ");
				}
        	}
            if (i != m - 1) {
				printf(" ");
			}
    	}
    } else {
		while (i != k) {
			for (int j = n - n0; j < n0; j++) {
			    printf("%d", matrix[m - m0][j]);
			    i++;
			    if (i == k) {
			        break;
				} else {
			        printf(" ");
				}
			}
			if (i == k) {
				break;
			}
			for (int j = m - m0 + 1; j < m0; j++) {
			    printf("%d", matrix[j][n0 - 1]);
			    i++;
				if(i == k) {
			        break;
				} else {
			        printf(" ");
				}
			}
			if (i == k) {
				break;
			}
			n0--;
			for (int j = n0 - 1; j >= n - n0 - 1; j--) {
			    printf("%d", matrix[m0 - 1][j]);
			    i++;
				if(i == k) {
					break;
				} else {
			        printf(" ");
				}
			}
			if (i == k) {
				break;
			}
			m0--;
			for (int j = m0 - 1; j >= m - m0; j--) {
			    printf("%d", matrix[j][n - n0 - 1]);
				i++;
				if(i == k) {
				    break;
				} else {
				    printf(" ");
				}
			}
			if (i == k) {
				break;
			}
		}
    }
    return 0;
}
