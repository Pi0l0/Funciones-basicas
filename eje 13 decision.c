#include <stdio.h>


int num = 0,numt = 0,elv = 0;

int main(){

    printf("ingresar un numero:   ");
    scanf("%d",&num);

    printf("\n Elevarlo a: ");
    scanf("%d",&elv);

    switch(elv){
        case 0:
            numt = 1;
        break;
        case 1:
            numt = num;
        break;

        case 2:
            numt = num*num;
        break;

        case 3:
            numt = num*num*num;
        break;

        case 4:
            numt = num*num*num*num;
        break;

        case 5:
            numt = num*num*num*num*num;

        break;

        default: printf("uh alta paja");
            return 0;
        }

    printf("\n\n   %d^%d = %d",num,elv,numt);

return 0;
}

