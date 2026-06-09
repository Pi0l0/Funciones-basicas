#include <stdio.h>
#include <ctype.h>
#include <conio.h>

char car;
int voc = 0,esp = 0;

int main(){

    printf("texto: ");

    car = _getch();
    printf("%c",car);

    car = toupper(car);

    while( car != '.'){

        if(car == 'A'||car == 'E'||car == 'I'||car == 'O'||car == 'U'){
            voc++;
        }
        if(car == ' '){
            esp++;
        }
       // getchar();
        //scanf("%c",&car);
        car = _getch();
        printf("%c",car);
        car = toupper(car);
    }

    printf("\n\nhay %d vocales",voc);
    printf("\n\nhay %d espacios",esp);

return 0; }
