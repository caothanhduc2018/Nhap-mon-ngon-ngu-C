có kiểu dữ liệu trả về (int)

#include <stdio.h>
int sum(int a, int b, int c);// khai bao ham sum
int sum(int a, int b, int c ){// dinh nghia ham sum
return a + b + c ;
} 
int main(){
  printf ("a + b + c = %d",sum (3, 5, 2 ));
  return 0;
}


không có kiểu dữ liệu trả về (void)
// khoi khai bao 
#include<stdio.h>
void sum(int a, int b, int c);


// khoi ham main
int main(){
int x = 1, y = 2, z = 3;
sum(x , y ,z);


  return 0; 
}

void sum(int a, int b , int c){
  int d = a + b + c;
 printf("tong la: %d", d);
}
// khoi dinh nghia ham 
