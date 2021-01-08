#include <stdio.h>
int main(){
    int n;
    int arata;
    int s = 0;
    printf("Nhap n: ");
    scanf("%d",&n);
    for(;n!=0;){
        arata = n % 10;
        s += arata;
        n /= 10; 
    printf("%d",s);}

return 0;
}


#include<stdio.h>
int main(){   
int n = 123;
int s = 0; 
s = s + n%10;
n= n/10;

s = s + n%10;
n= n/10;

s = s + n%10;
n= n/10;
 for (;n!=o; n%10)
 s = s + n=n/10;

 n=123
 while (n!=0; n %10)
 s = s + n=n/1=;

printf ("%d",s);

return 0 ; 
}

