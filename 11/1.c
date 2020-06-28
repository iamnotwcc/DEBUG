#include <stdio.h>
#include <string.h>

int main()
{
    int arr[32] = {0};
    char input[500];
    int bits[32];
    char result[33];
    int i = 0, j = 0;
    scanf("%s", input);
    int length = strlen(input);
    while (i < length) {
        arr[(i + 1) % 32] = arr[(i + 1) % 32] + (int)input[i];
        i++;
    }
    
    for (j = 0; j <= 31; j++) {
        bits[j] = arr[31 - j] ^ (arr[j] << 1);    
    }
    
    for (j = 0; j <= 31; j++) {
        result[j] = (bits[j] % 85) + 34;    
    }
    result[32] = '\0';
    puts(result);

    return 0;
}
