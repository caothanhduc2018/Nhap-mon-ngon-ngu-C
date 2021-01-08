#include<stdio.h>
int main(){   
int n,tong=0,m;  

printf("Nhap mot so bat ky: ");  
scanf("%d",&n);  

m=n%10;  
tong=tong+m ;  
n=n/10;

m=n%10;  
tong=tong+m ;  
n=n/10;

m=n%10;  
tong=tong+m ;  
n=n/10;
  
printf(" \nTong cac ky so cua so da cho %d ",tong); 
return 0;

}
