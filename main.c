/****************************************************************************
Scrivere un programma in linguaggio c che
chiede un numero in input che determina l'età di una persona 
stampa se è maggiorenne o minorenne.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numero;
    
        printf("inserisci la tua eta:");
        scanf("%d",&numero);

        if(numero>=18)
        {
        printf("sei maggiorenne");
        }
        else 
        {
        printf("sei minorenne");
        }
    return 0;
}
