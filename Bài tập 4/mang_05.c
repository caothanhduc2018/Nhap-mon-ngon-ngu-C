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
  }
   printf("mang a:");
   for(int i = 0;  i < n; i++){
  printf ("  %d ", a[i] );
   }
   int m;
   printf (" nhap so bat ky:");
   scanf ("%d", &m);


  
  for ( int i = 0; i < n; i++){
    if(a[i]  == m){
    printf (" \nco ton tai %d", a[i]);
    break;
  }}
  
  for (int i = 0; i < n; i++){
    if(a[i] != m){
    printf (" \nkhong ton tai %d", a[i]);
  }}

  
  return 0;
}
