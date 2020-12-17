#include <stdio.h>

int main(void){
	int a = 5, b = 2;
  char pt;
  printf("vui long nhap phep tinh: ");
  scanf("%c", &pt);
  switch(pt){
    case '+':// (pt == +)

      printf("a + b = %d",a + b);
      break;
    case '-':// (pt == -)
    printf("a - b = %d", a - b);
    break;
  
    printf("vui long nhap phep tinh");
  }
getchar();
	return 0;
	}
