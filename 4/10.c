#include <stdio.h>

int main()
{
    int m, n = 10;
    int numbers[10];
    int i, j, k;
    int max;
    int temp;

    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    for (j = 0; j < n - 1; j++) {
    	max = j;
        for (k = j + 1; k < n; k++) {
            if(numbers[max] < numbers[k]){
                max = k;
            }
        }
    	if (max != j) {
    		temp = numbers[j];
    		numbers[j] = numbers[max];
    		numbers[max] = temp;
    	}
    }
    for (int q = 0; q < n; q++) {
        if (q == 9) {
            printf("%d", numbers[q]);
        } else {
            printf("%d ", numbers[q]);
        }
    }

    return 0;
}
