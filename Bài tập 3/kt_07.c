#include <stdio.h>

int main(){
    int a, b, c;
    printf("Nhap vao canh a: ");
    scanf ("%d" , &a);
    printf("Nhap vao canh b: ");
    scanf ("%d" , &b);
    printf("Nhap vao canh c: ");
    scanf ("%d" , &c);
    if( a<b+c && b<a+c && c<a+b ){
    printf("Day la tam giac ");
    }
    else
    {}
    return 0;
}
