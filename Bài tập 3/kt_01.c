#include <stdio.h>

int main() {
  int a , b;
for (a = 2; a <= 9; a++) {
for (b = 1; b <= 9; b++) {
  printf ("%d x %d = %d\n", a, b , a*b );}
  printf ("\n");
}
getchar();
return 0;
}
