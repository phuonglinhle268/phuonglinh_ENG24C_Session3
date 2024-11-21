#include <stdio.h>

int main() {
	int so, nghichDao = 0;
	printf("Nhap mot so nguyen co 4 chu so : ");
	scanf("%d", &so);
	
	while (so != 0) {
		nghichDao = nghichDao * 10 + (so % 10);
		so /= 10;
		
	} 
	
	print("So nghich dao la : %d\n", nghichDao);
	
	return 0; 
} 
