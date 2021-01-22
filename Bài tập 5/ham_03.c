//Khoi khai bao
#include<stdio.h>
int n;// bien toan cuc
void Nhap_pt_mang (int a[]);
void Hien_thi_pt_mang (int a[]);
void Hien_thi_tong_chan (int a[]);
void Dem_chan_le_0(int a[]);


 //khoi ham main

int main(){

  printf("Nhap n = ");
  scanf("%d", &n);
  int a[n];
  // nhap phan tu cua mang a
  Nhap_pt_mang(a);
  Hien_thi_pt_mang(a);
  Hien_thi_tong_chan(a);
  Dem_chan_le_0(a);
 
  return 0;
}


// khoi dinh nghia ham
void Nhap_pt_mang (int a[] ){
// nhap n phan tu cua mang a tu ban phim
for (int i = 0;  i < n; i++){
  printf ("nhap phan tu thu %d  ", i);
  scanf("%d", &a[i]);
  }
}


void Hien_thi_pt_mang (int a[] ){
  int i; 
   printf("\n mang a  " );
  for(int i=0; i < n; i++){
      printf(" %d",a[i]);
  }
}

void Hien_thi_tong_chan (int a[]){
  int i, sum=0;
  for(int i=0;i<n;i++){
        if(a[i] % 2 == 0){ 
          sum+=a[i];
        }
  }
  printf("\n tong so chan  = %d ",sum);
}

void Dem_chan_le_0 (int a[]){
   int i, b=0;
   for(int i=0;i<n;i++){
    
        if(a[i] % 2==0){ 
        b+=1;
        }
        printf ("\nmang co so chan :%d", b);
  }}
