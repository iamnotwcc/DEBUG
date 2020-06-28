#include <stdio.h>
#include <string.h>

int main()
{
    char pms[4];
    char change_pms[100][3];
    int i = 0, j;
    int a = 0;

    scanf("%s", pms);

    while (scanf("%s", change_pms[i++]) != EOF) {
    }

    for (i = 0; i < strlen(pms); i++) {
        if (pms[i] == 'r') {
            a += 4;
        } else if (pms[i] == 'w') {
            a += 2;
        } else {
            a += 1;
        } 
    }

    for (i = 0; strcmp(change_pms[i],"EOF"); i++) {
        j = 0;
        if (change_pms[i][j] == '+') {
            if (change_pms[i][j + 1] == 'r') {
                a += 4;   
            } else if (change_pms[i][j + 1] == 'w') {
                a += 2;
            } else {
                a += 1;
            }
        } else if (change_pms[i][j] == '-') {
            if (change_pms[i][j + 1] == 'r') {
                a -= 4;   
            } else if (change_pms[i][j + 1] == 'w') {
                a -= 2;
            } else {
                a -= 1;
            }
        } else {
    		break;
    	}
    }

    printf("%d", a);
    
    return 0;
}
