#include <stdio.h>

int main(){
int a;// khai bao hop 1 ngan
a = 3;

int b[3];// khai bao hop 3 ngan
b[0] = 3 ;// ngan thu nhat
b[1] = 4 ;// ngan thu hai 
b[2] = 1 ;// ngan thu ba

float c[4] = {1.5, 2.3, 0.5, 2.7}; // khai bao 1 hop 4 ngan chua so kieu float

// hien thi tat ca cac phan tu thu nhat cua mang b
for(int i = 0; i < 3; i++)
printf ("%d" , b[i]);

// khai bap cac phan tu mang b 
int tong =  0;
for(int i = 0; i < 3; i++)
tong = tong +b[i];
return 0;
}
