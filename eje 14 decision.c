#include <stdio.h>


float pre = 0.0;
float preT = 0.0;
char des;

int main(){

        printf("ingresar precio:   ");
        scanf("%f",&pre);


        printf("Ingresar metodo de pago \n (E = efectivo)\n (D = devito)\n (C = credito)\n (T = ticket) \n   ");
        getchar();
        scanf("%c",&des);

    des =toupper(des);

    switch(des){

        case 'E':
            preT = pre-(pre * 0.1);

        break;

        case 'D':
            preT = pre-(pre * 0.035);

        break;

        case 'C':
            preT = pre-(pre * 0.05);

        break;

        case 'T':
            preT = pre;

        default: printf("Letra no valida!!!");
        return 0;
    }

    printf("\n \n El importe total es:  %.2f",preT);

return 0;
}
