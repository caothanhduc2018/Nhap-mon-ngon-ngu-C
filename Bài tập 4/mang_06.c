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
  printf ("a[%d]   ", i);
  scanf("%d", &a[i]);
  }
   printf("mang a:");
   for(int i = 0;  i < n; i++){
  printf ("  %d ", a[i] );
   }
 
   int m;
   printf (" \nm :");
   scanf ("%d", &m);
 
  int c = 0;
  for ( int i = 0; i < n; i++){
    if(a[i]  == m){
      c = c + 1;
    }}
 
   printf (" \nso phan co gia tri là %d : %d" , m,c);
   printf ("\nchi so cac phan tu ");
   for (int i = 0; i < n; i++){
     printf("  %d "   , i);
   }
 
  
return 0;
  }
