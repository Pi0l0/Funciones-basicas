#include <stdio.h>
#include <ctype.h>
int age = 0;
char nac;
int main(){

    printf("ingresar edad:  ");
        scanf("%d",&age);

    printf("Ingresar nacionalidad (A = argentino E = Extranjero):      ");
        getchar();
        scanf("%c",&nac);
        nac = toupper(nac);
    if (age <18){
    return 0;
    } else {

        if(nac == 'A'){

            printf("Argentino mayor de edad");

        } else if(nac == 'B'){

            printf("BOLIVIANOOOOOOOO");

        }else {

        printf("Extrajero mayor de edad");

        }



    }


return 0;

}
