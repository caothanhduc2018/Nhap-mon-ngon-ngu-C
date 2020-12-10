#include <stdio.h>

int main(){
	// khai bao bien a,b
	int a,b ;
	printf ("nhap a =");
	scanf("%d", & a);
	printf ("nhap b =");
	scanf("%d", & b );
	if(a > b){
	printf("a > b");
	}else if(a == b) {
	printf("a = b ");
	}else {
	printf("a < b");
	}
	getchar();
	return 0;

	}
