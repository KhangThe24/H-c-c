#include <stdio.h>
#define PI 3.14
struct bankinhhinhtron{
  int tamx;
  int tamy;
  int r;
};
float ChuVi(struct bankinhhinhtron o){
  return o.r*2*PI;
}
float DienTich(struct bankinhhinhtron o){
  return PI*o.r*o.r;
}
int main(){
  struct bankinhhinhtron o;
  printf(" Nhap thong tin hinh tron \n");
  printf("Nhap tam x la: ");
  scanf("%d", &o.tamx);
  printf("Nhap toa do tam y la: ");
  scanf("%d", &o.tamy);
  printf("Nhap ban kinh hinh tron la: ");
  scanf("%d", &o.r);
  printf("Dien tich hinh tron la: %f", DienTich(o));
  printf("\nChu vi hinh tron la: %f", ChuVi(o));
  return 0;
}