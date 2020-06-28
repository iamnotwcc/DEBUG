#include <stdio.h>

void swap(int a, int b, int *numbers)
{
    int c;
    if (numbers[a] < numbers[b]) {
        c = numbers[a];
        numbers[a] = numbers[b];
        numbers[b] = c;
    }
}

int main()
{
    int n = 10;
    int m;
    int numbers[10];
    int i;
    
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    for (i = 0; i < n - 1; i++) {
        for (int j = n - 1; j > i; j--) {
            swap(j - 1, j, numbers);
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%d", numbers[i]);
        if (i != n - 1) {
    		printf(" ");
    	}
    }
    
    return 0;
}
