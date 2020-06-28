#include <stdio.h>
#include <string.h>

int main() 
{
    char str[500], arr[32] = {0};
    int  bits[32];
    int  i;
    int  j = 1;

    scanf("%s", str);

    for (i = 0; i < strlen(str); i++) {
        if (str[i] == '\n') {
            break;
        }
        int c = (int)str[i];
        arr[j % 32] += c;
        j++;
    }

    for (i = 0; i < 32; i++) {
        bits[i] = arr[31 - i] ^ (arr[i] << 1);
    }

    for (i = 0; i < 32; i++) {
        int b = bits[i] % 85 + 34;
        printf("%c", (char)b);
    }

    return 0;
}
