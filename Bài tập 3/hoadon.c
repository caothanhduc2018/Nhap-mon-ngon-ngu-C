#include <stdio.h>

int main(){
	// khai bao bien don gia,so luong, thanh tien
	int dongia, soluong, thanhtien;
	printf("nhap don gia =");
	scanf("%d", & dongia);
	printf ("nhap so luong =");
	scanf ("%d", & soluong);
	// so luong mua > 5, 
	
	if(soluong >=5){
	thanhtien=(dongia)* (soluong )*0.75;
	printf("%d",thanhtien);
	}else {printf("%f",thanhtien);}
	getchar();
	return 0;
	}
