#include <stdio.h>

int main(){
int i, sum = 0;
int a[4]={3, 5, 7, 2};
for(i=0;i<4;i++){
sum =sum + a[i]; 
printf ("%d tong cac so phan tu: %d\n " ,i+0, a[i]);
printf ("tong so %d\t", sum );
  printf("%d\t",a[i]);
}

return 0;
}
