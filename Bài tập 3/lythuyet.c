dem=dem+1
* dem+=1
* dem++
  
   #include <stdio.h>
int main(){
  int n, tong=0;
  for ( int n = 1; n <= 10; n++){
    tong=tong + n;}
  printf("tong la: %d", tong);
  tong = tong + 1;
  tong = tong + 2;
  tong = tong + 3;
  tong = tong + 4;
  tong = tong + 5;
  tong = tong + 6;
  tong = tong + 7;
  tong = tong + 8;
  tong = tong + 9;
  tong = tong + 10;
  return 0;
