#include <stdio.h>
int sum(int a, int b, int c);// khai bao ham sum
int sum(int a, int b, int c ){// dinh nghia ham sum
return a + b + c ;
} 
int main(){
  printf ("a + b + c = %d",sum (3, 5, 2 ));
  return 0;
}
