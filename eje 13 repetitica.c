#include <stdio.h>

int num = 0,pmin = 0, ubi = 1, min = 0;

int main(){

        printf("ingresar 10 nums:");

    for(int i = 1 ;i<11; i++){
        printf("numero (%d) -> ",i);
        scanf("%d",&num);

        min = num;
        if(min < pmin){
            pmin = min;
            ubi = i;
        } else if( i == 1){
            pmin = min;
        }

}

    printf("el mas pequeño es %d y fue ingresado %d",pmin,ubi);




return 0;}
