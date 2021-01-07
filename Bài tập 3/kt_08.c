#include<stdio.h>
int main(){
    float a, b;
    printf("Nhap  a: ");
    scanf ("%f" , &a);
    printf("Nhap  b: ");
    scanf ("%f" , &b);
   if  (a*b>0)
  {     
     printf ("a=%.0f, b=%.0f (0) va (1) cung dau", a ,b);
  }
  else if (a*b< 0)
  {
     printf ("a=%.0f, b=%.0f (0) va (1) trai dau", a, b);
  }  
return 0;
}  
