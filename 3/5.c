#include <stdio.h>

int main()
{
    int matrix[100][100];
    int m;
    int n;
    
    scanf("%d%d", &m, &n);
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int count = 0;
    int total = m * n;
    
    int start = 0, column = n, row = m;
    if (n == 1) {
        for (int i = 0; i < m; i++) {
            if (i == m - 1){
                printf("%d", matrix[i][0]);
            } else {
      		    printf("%d ", matrix[i][0]);
    			count++;
    		}
        }
    } else if (m == 1) {
        for (int j = 0; j < n; j++) {
            if (j == n - 1){
                printf("%d", matrix[0][j]);
            } else {
				printf("%d ", matrix[0][j]);
    	    }
        }
    } else {
    	while (count != total) {
        for (int j = start; j < column; j++) {
            printf("%d ", matrix[start][j]);
    		count++;
    		if (count == total) {
    			break;
    		}
        }
    	if (count == total) {
    		break;
    	}
        for (int i = start + 1; i < row; i++) {
           	printf("%d ", matrix[i][column-1]);
    		count++;
    		if (count == total) {
    			break;
    		}
        }
    	if (count == total) {
    		break;
    	}
        for (int j = column - 2; j >= start; j--) {
          	printf("%d ", matrix[row-1][j]);
    		count++;
    		if (count == total) {
    			break;
    		}
       	}
    	if (count == total) {
    		break;
    	}
        for (int i = row - 2; i > start; i--) {
           	printf("%d ", matrix[i][start]);
    		count++;
    		if (count == total) {
    			break;
    		}
       	}
    	start++;
    	column--;
    	row--;
    	}
    }

    return 0;
}
