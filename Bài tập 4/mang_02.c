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
  printf("mang a:");
    for(int i = 0;  i < n; i++){
       if(a[i]%2==0)
                 printf("\n%d",a[i]);}
                     return 0;
}
  
