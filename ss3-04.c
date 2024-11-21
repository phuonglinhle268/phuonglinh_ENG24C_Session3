#include <stdio.h>

int main(){
	float toan, vann, anh, tong, diemTrungBinh;
	printf("Nhap diem Toan : ");
	scanf("%f", &toan);
	
	printf("Nhap diem Van : ");
	scanf("%f", &van);
	
	printf("Nhap diem Anh : ");
	scanf("%f", &anh);
	
	float tong = toan + van + anh;
	diemTrungBinh = tong / 3;
	
	printf("Diem tong cua ban la : %.2f\n", tong);
	printf("Diem trung binh la : %.2f\n", diemTrungBinh);
	
	return 0
}
