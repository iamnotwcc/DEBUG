#include <stdio.h>
#include <math.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
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
    
    for (i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
    	    if (numbers[i] < numbers[j]) {
                swap(&numbers[i], &numbers[j]);
            }
        }
    }
    
    for (m = 0; m < 10; m++) {
        printf("%d", numbers[m]);
        if (m != 9) {
            printf(" ");
        }
    }
    
    return 0;
}
