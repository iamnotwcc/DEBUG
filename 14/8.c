#include <stdio.h>

int main() 
{
    int shuru;
    int geshu;
    int hangshu;
    int shuru2;
    scanf("%d", &shuru);
    shuru2 = shuru;
    for (hangshu = 1; hangshu <= shuru; hangshu++) {
        for (shuru2 = shuru - hangshu + 1; shuru2 >= 1; shuru2--) {
            printf("%d", shuru2);
            if (shuru2 != 1) {
    			printf(" ");
    		}
        }
    	if (hangshu != shuru) {
    		printf("\n");
    	}
    }

    return 0;
}
