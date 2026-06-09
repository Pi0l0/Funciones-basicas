#include <stdio.h>

int EstaDentroDelRango(int,int,int);
int LeerYValidar();
int a = 0,b = 0,c = 0;
int suma,prom;

int main(){
    int num = 0;

    while(num != 99){
        if (num != 99){
        printf("ingresar un numero (entre 100 y 2000):   ");

            num = LeerYValidar();
            if(num > 100){

                if(EstaDentroDelRango(num,100,500)) {a++;}

                if(EstaDentroDelRango(num,500,1200)) {
                        if((num % 2) == 0) {b++;}
                }

                if(EstaDentroDelRango(num,1200,2000)){
                    suma += num;
                    c++;
                }

            }
        }
    }

printf("a = %d \n",a);
printf("b = %d \n",b);
printf("c = %d \n",suma/c);
return 0;
}

int EstaDentroDelRango(int num,int min,int max){
    int aux;
    if (num >= min && num <= max) {aux = 1;} else {aux = 0;}
        return aux;
}

int LeerYValidar(int num,int min,int max){
    int aux2;

        scanf("%d",&num);
    if(EstaDentroDelRango(num,100,2000)){aux2 = num;}
    else if(num == 99){aux2 = 99;}
    else{aux2 = 0;}

        return aux2;

}
