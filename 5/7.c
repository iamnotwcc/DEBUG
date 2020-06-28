#include <stdio.h>
#include <string.h>
#include <malloc.h>

int main()
{
    char name[20][31];
    int i;
    int j;
    int m = 10;
    char a[21];

    for (i = 0; i < m; i++) {
        scanf("%s", name[i]);    
    }

    for (j = 0; j < m; j++) {
        for (i = 0; i < m - j - 1; i++) {
            if(strcmp(name[i], name[i + 1]) > 0) { 
                strcpy(a, name[i]);
                strcpy(name[i], name[i + 1]);
                strcpy(name[i + 1], a); 
            }
        }
    }

    for (i = 0; i < m; i++) {
        printf("%s\n", name[i]);    
    }

    return 0;
}
