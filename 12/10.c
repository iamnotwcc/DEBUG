#include <stdio.h>

#define PI 3.14159

int main() {
	double radius;
    scanf("%lf", &radius);
    
	printf("%.3f\n%.3f\n", 2 * PI * radius, PI * radius * radius);
    
	return 0;
}
