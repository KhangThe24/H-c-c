#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(NULL));
    int i;
    for(i=0;i<1;i++){
        int ramdom = 1+rand()%6;
        printf("so vua quay duoc la:%6d\n",ramdom);
       switch(ramdom){
           case 1: printf("oh moi em quay lai luot sau");
            break;
           case 6:{
                printf("xin chuc mung ban\n moi ban tiep tuc quay\n");
                int j;
                for(j=0;j<1;j++){
                    int xucxac = 1+rand()%6;
                    printf("so vua quay tiep tuc la :%6d\n",xucxac);
                }  
            } 
            break;
       }
    }
        getch (0);
        return 0;
}
