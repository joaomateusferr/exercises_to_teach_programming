#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia;

    printf("insira o numero do dia da semana\n");
    scanf("%i",&dia);

    switch(dia)
    {
        case 1: printf("domingo\n");
                break;

        case 2: printf("segunda\n");
                break;

        case 3: printf("terca\n");
                break;

        case 4: printf("quarta\n");
                break;

        case 5: printf("quinta\n");
                break;

        case 6: printf("sexta\n");
                break;

        case 7: printf("sabado\n");
                break;
    }


    return 0;
}
