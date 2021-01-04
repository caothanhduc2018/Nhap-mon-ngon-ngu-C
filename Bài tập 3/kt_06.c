#include <stdio.h>

int main ()
{
int n,i,j;// khai bao bien du lieu
printf ("nhap n : ");
scanf ("%d" , &n);
printf (" tam giac vuong can:\n\n ");
for (i = 1 ; i <=n; i++)
{
for (j = 1 ; j <=n; j++)
printf (" * ");
printf (" \n ");
}
return 0;
}
