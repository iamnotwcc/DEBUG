#include <stdio.h>

int main() 
{
    int n;
    int i = 0;
    int a[51] = {0};

    a[2] = 1;
    a[3] = 1;
    a[4] = 1;

    scanf("%d", &n);

    for(i = 5; i <= n; i++) {
        a[i] = a[i - 2] + a[i - 3];
    }

    printf("%d", a[n]);

    return 0;
}
