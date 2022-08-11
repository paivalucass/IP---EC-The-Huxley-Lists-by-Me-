#include <stdio.h>

int main () {
    int dia , mes , ano;
    int resto;
    scanf("%d %d %d", &dia, &mes, &ano);
    resto = ano%100;
    if (ano >= 1900 && ano <= 2100){
    if ( mes == 4 || mes == 6 || mes == 9 || mes == 11 ){
        if ( dia <= 30 && dia > 0)
            printf("valida"); 
        else 
        printf("invalida");
        }
    else if ( mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12 ){
        if ( dia > 0 && dia <= 31)
            printf("valida");
        else 
        printf("invalida");
        }
    else if ( mes == 2 ){
        if (resto != 0 && resto%4 == 0 && dia <= 29 && dia > 0 )
            printf("valida");
        else if ( resto == 0 && ano%400 == 0 && dia <= 29 && dia > 0 )
            printf("valida");
        else if ( resto != 0 && resto%4 != 0 && dia <= 28 && dia > 0)
            printf("valida");
        else 
        printf("invalida");    
        }
    else printf("invalida");
    }
    else printf("invalida");    
    
    return 0;
}