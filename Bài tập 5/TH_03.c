  
#include <stdio.h>
int  somax(int a, int b,int c);

 int main(){

   int a, b, c;
  printf("Nhap vao lan luot a, b, c:  ");
  scanf("%d %d %d", &a , &b , &c );

  
  int i =somax( a, b ,c);
  printf("So lon nhat trong ba so la: %d", i );
}
   
   int somax(int a,int b, int c){
  int max=0;
	if (max < a){
		max=a;
	}
	if (max < b){
		max=b;
	}
	if (max < c){
		max=c;
	}
	return max;
   }
