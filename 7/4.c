#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d-%d-%d", &a, &b, &c);
    if (b > 12 || c > 31) {
        printf("NO");
    } else if (b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12) {
        if (c <= 31) {
        	printf("YES");
        } else {
        	printf("NO");
        }
    } else if (b != 2) {
        if (c > 30) {
        	printf("NO");
        } else {
        	printf("YES");
        }
    } else if (a % 100 != 0 && a % 4 == 0 || a % 400 == 0) {
        if (c >= 1 && c <= 29) {
        	printf("YES");
        } else {
        	printf("NO");
        }
    } else {
        if (c >= 1 && c <= 28) {
        	printf("YES");
        } else {
        	printf("NO");
        }
    }
    printf("\n");

    return 0;
}
