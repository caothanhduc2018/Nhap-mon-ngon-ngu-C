#include <stdio.h>


int main(){
  int n, tong = 0;
  // yeu cau nguoi dung nhap n tu ban phim 
  printf ("nhap n =  ");
  scanf("%d", &n);
  // tao mang a chua so nguyen kich thuoc n 
  int a[n];
  // nhap n phan tu cua mang a tu ban phim
  for(int i = 0;  i < n; i++){
  printf ("nhap phan tu thu %d  ", i);
  scanf("%d", &a[i]);
  printf("\n");
  }
 
 for (int i = 0; i < n; i++) {   
 tong = tong + a[i]; 
} 
printf("Tong cac phan tu cua mang la %d", tong);
 
}
