#include <stdio.h>

int main(){

int n;
printf ("nhap so n");
scanf ("%d" , &n);
int a[n];
 for (int i=0;i < n;i++){
 scanf ("%d" , &a[i]);
 }
 for (int i = 0; i < n; i++ ){
 printf (" %d\t gia tri phan tu: %d\n " ,i+0, a[i]);
 }

       for (int i=0;i < n;i++)
       {
              if(a[i]%2==0)
                     printf("%d",a[i]);
       }

return 0;
}
