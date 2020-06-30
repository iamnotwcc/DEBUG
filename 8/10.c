#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d\n", &n);

    int i, j, k;
    char a[100][101] = {'0'};
    char temp[101] = {'0'};

    for (i = 0; i < n; i++) {
        for (j = 0; j < 101; j++) {
            if (scanf("%c",&a[i][j]) == EOF) {
                break;
            }
            if (a[i][j] == '\n') {
                a[i][j] = '\0';
    			break;
            }
        }
    }
    
    for (i = 0, k = 0; i < n - 1; i++) {
        if (strlen(a[k]) >= strlen(a[i+1])) {
            strcpy(temp, a[k]);
        } else {
            k = i + 1;
            strcpy(temp, a[k]);
        }
    }
    printf("%s\n", temp);

    return 0;
}
