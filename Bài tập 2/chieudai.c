#include <stdio.h>
int main(void){

int l;
//khai bao don vi m,cm,mm
double m,cm,mm ;
printf ("Nhap chieu dai  l=");
scanf ("%d",&l);
printf ("nhap cm =");
scanf ("%d", & cm);
printf ("nhap mm =");
scanf ("%d", & mm);
 m=l;
cm=l*100;
mm=l*1000;
printf("m\t cm\t mm\t %d %d %d",m,cm,mm);
return 0;
}
