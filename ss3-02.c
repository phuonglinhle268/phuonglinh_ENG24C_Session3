#include <stdio.h>

int main() {
	float celsius, fahrenheit; 
	print("Nhap nhiet do celsius : ");
	scanf("%f", &celsius);
	
	fahrenheit = (celsius * 9/5) + 32;
	
	printf("Nhiet do tuong duong la %.1f do fahrenheit.\n", fahrenheit);
	
	return 0;
} 
