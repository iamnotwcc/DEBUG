#include <stdio.h>
#include <string.h>

int main() 
{
    int  arr[32] = {0};
    char str[32];
    int  bits[32];
    char result[32];
    char input;
    int  j = 1;
    
    while (scanf("%c", &input) != EOF) {
        if (input == '\n'){
            break;
        }
        int c = (int)input;
        arr[j % 32] = arr[j % 32] + c;
        j++;
    }
   
    for (int i = 0; i < 32; i++) {
        bits[i] = arr[31 - i] ^ (arr[i] << 1);
    }
    
    for (int i = 0; i < 32; i++) {
        int b = bits[i] % 85 + 34;
        printf("%c", (char)b);
    }

    return 0;
}
