#include<stdio.h>
// vòng lập lồng nhau
int main(){
    int i, j;
    printf("hay nhap i= ");
    scanf("%d",&i);
    printf("hay nhap j= ");
    scanf("%d",&j);

    for(i=1; i<10; i++){
      for(j=1; j<=i; j++){
         printf("*");
      }
      printf("\n");
    }
    return 0;
}
