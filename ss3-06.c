#include <stdio.h>

int main(){
	float canhDay, chieuCao, dienTich
	printf("Nhap do dai canh day tam giac : ");
	scanf("%f", &canhDay);
	print("Nhap chieu cao cua tam giac : ");
	scanf("%f", &chieuCao);
	float dienTich = (canhDay * chieuCao) / 2;
	printf("Dien tich cua tam giac la : %.2f\n", dienTich);
	
	return 0
}
