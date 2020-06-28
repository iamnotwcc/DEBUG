#include <stdio.h>
#include <string.h>

int main() 
{
    char names[10][21];
    for (int i = 0; i < 10; i++) {
        scanf("%s", names[i]);
    }
    
    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                char temp[21];
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
    
    for (int i = 0; i < 10; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
