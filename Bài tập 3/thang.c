#include <stdio.h>

int main(){
  int thang;
  char pt;
  printf("Vui long nhap thang");
  scanf("%d",&thang);
  switch(thang) {
  case 12:
  case 11:
  case 10:
  case 9:
  case 8:
  case 7:
  case 6:
  case 5:
  case 4:
  case 3: printf("la 30 ngay or");
  case 1:  printf(" 31 ngay"); break;
  case 2: printf("la 28 or 29 "); break;

default:
 printf("vui long nhap thang");
  }
    

 getchar();
  return 0;
}
