#include <stdio.h>

int main(){
int i;// khai bao 
int sum = 0;// khai bao
int a[4]={3, 5, 7, 2};// khai bao cac phan tu trong hop 
for(i=0;i<4;i++){
sum =sum + a[i];// hien thi phan tu mang a[i] 
printf (" phan tu  %d\t gia tri phan tu: %d\n " ,i+0, a[i]);
// xuat ra gia tri cua cac mang da cho
printf ("tong so %d\n", sum );
// hien thi tong so theo tung phan tu 
  printf("%d\n",a[i]);
// hien thi phan tu trong mang  
}

return 0;
}
