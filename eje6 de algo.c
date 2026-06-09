
#include <stdio.h>

    int num = 1,n = 1;
    float prom = 1;
int main(){

        printf("ingresar el %d numero: ", n);
        scanf("%d",&num);
    int ulnumE = num + 1;
    int ulnumA = num - 1;

    while (num != 0){

        if(num < ulnumE){
            ulnumE = num;
        }
        if(num > ulnumA){
            ulnumA = num;
        }

            printf("ingresar el %d numero: ", n + 1);
            scanf("%d",&num);
                n++;

        }

        printf("\n El mayor numero es: %d",ulnumA);
        printf("\n El menor numero es: %d",ulnumE);

return 0;
}
