#include <stdio.h>
int main(){
 // khai báo biến
	float a, c, b, delta, x1, x2, x;
	printf("Nhap vao he so phuong trinh bac hai: ");
	scanf("%f%f%f", &a, &b, &c);
	// xét duyệt các khả năng
	if(a == 0) { 
		if(b == 0 && c != 0) {
			printf(" vo nghiem\n");
		} else if(b == 0 && c == 0) {
			printf(" co vo so nghiem\n");
		} else {
			x = -c / b;
			printf("Nghiem phuong trinh = %0.2f", x);
		}
	} else { 
		delta = b * b - a * c * 4; 
		if(delta < 0) { // TH1
			printf("vo nghiem");
		} else if(delta == 0) { // TH2
			x1 = -b/(2 * a);
			// kết quả
			printf("co nghiem kep x = %0.2f", x1);
		} else { // TH3
			x1 = (-b + sqrt(delta)) / (2 * a);
			x2 = (-b - sqrt(delta)) / (2 * a);
			// kết quả
			printf("Nghiem PT la: \nx1 = %0.2f\nx2 = %0.2f", x1, x2);
		}
	}
	
	return 0;
} 
