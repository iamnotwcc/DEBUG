#include <stdio.h>

int main()
{
    int n = 10;
    int m;
    int numbers[10];
    int i;
    int max;
    int inter;

    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    for (i = 0; i < n - 1; i++) {
		max = i;
        for (m = i + 1; m < n; m++) {
            if (numbers[max] < numbers[m]) {
                max = m;
            }
        }
		if (max != i) {
			inter = numbers[i];
			numbers[i] = numbers[max];
			numbers[max] = inter;
		}
    }
    
    for (i = 0; i < n; i++) {
        printf("%d", numbers[i]);
        if (i != n - 1) {
            printf(" ");
        }
    }

    return 0;
}
