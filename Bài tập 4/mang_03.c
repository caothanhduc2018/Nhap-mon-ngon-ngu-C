#include <stdio.h>


int main(){
  int n;
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
  // hien thi cac phan tu cua mang a
  for(int i = 0;  i < n; i++){
  printf ("  %d ", a[i] );}
  printf("mang so chan a:");
    for(int i = 0;  i < n; i++){
       if(a[i]%2==0)
                 printf("\n%d",a[i]);}
 
  printf ("mang so le b:");
    for(int i = 0;  i < n; i++){
       if(a[i]%2!=0)
                 printf("\n%d",a[i]);}
 return 0;
 }
 
