#include<stdio.h>
int main(){
int n;
int arata;
int s = 0;
printf("Nhap n: ");// khai bao bien 
scanf("%d",&n);
for(;n!=0;){
arata = n % 10;
s += arata;
n /= 10;    
}
printf("%d",s);
return 0;
}
