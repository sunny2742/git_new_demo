#include <stdio.h>
#include <stdlib.h>

int main() {
	float side,area;
	printf("Enter a side:");
	scanf("%f",&side);
	area=side*side;
	printf("area of squre%0.2f",area);
	return 0;
}
