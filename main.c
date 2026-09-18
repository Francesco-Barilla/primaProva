#include <stdio.h>

int main()
{
    int numero;
    printf("inserisci la tua età:");
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
