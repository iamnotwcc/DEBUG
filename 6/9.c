#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int i = 0;
	int chmod = 0;
	int chmod_r = 0;
	int chmod_w = 0;
	int chmod_x = 0;
	
	char temp[3];
	char permission[10][3];

	while (scanf("%s", temp) != EOF) {
			strcpy(permission[i], temp);
			i++;
		}

	for (i = 0; i < 3; i++) {
		if (permission[0][i] == 'r') {
				chmod_r++;
			}	
		if (permission[0][i] == 'w') {
				chmod_w++;
			}
		if (permission[0][i] == 'x') {
				chmod_x++;
			}
		}

	for (i = 1; i < 10; i++) {
		if (permission[i][0] == '+') {
			if (permission[i][1] == 'r') {
				chmod_r++;
			}	
			if (permission[i][1] == 'w') {
				chmod_w++;
			}
			if (permission[i][1] == 'x') {
				chmod_x++;
			}
		}
		if (permission[i][0] == '-') {
		    if (permission[i][1] == 'r') {
				chmod_r--;
			}	
			if (permission[i][1] == 'w') {
				chmod_w--;
			}
			if (permission[i][1] == 'x') {
			    chmod_x--;
			}
		}
		
	}
	chmod = chmod_r * 4 + chmod_w * 2 + chmod_x * 1;
	printf("%d", chmod);

	return 0;
}
