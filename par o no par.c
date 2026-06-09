#include <stdio.h>
float pnp = 0;
int num = 0;
int main(){

        printf("ingresar un numero:");
            scanf("%d",&num);

    pnp = num%2;

        if(pnp == 0){
            printf("espar");

        }else{
            printf("noespar");
        }


return 0;
}
