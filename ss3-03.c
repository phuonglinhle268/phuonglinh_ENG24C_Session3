#include <stdio.h>
#define PI 3.14

int main() {
	float radius, circumference, area;
	printf("Nhap ban kinh hinh tron : ");
	scanf("%f", &radius);
	
	float circumference = 2 * PI * radius;
	float area = PI * radious * radius;
	
	printf("Chu vi la : %.2f\n", circumference);
	printf("Dien tich la : %.2f\n", area);
	
	return 0;
}
