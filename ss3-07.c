#include <stdio.h>

int main() {
	int so, tong = 0;
	printf("Nhap so nguyen co 4 chu so : ");
	scanf("%d", &so);
	
	tong += so % 10;
	so /= 10;
	tong += so % 10;
	so /= 10;
	tong += so % 10;
	so /= 10;
	tong += 10 % 10;
	
	printf ("Tong cac chu so la : %d\n", tong);
	
	return 0; 
	 
}
