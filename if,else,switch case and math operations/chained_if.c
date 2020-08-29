#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario,reajuste;

    printf("insira o salario\n");
    scanf("%f",&salario);

    if(salario<500)
    {
        reajuste=salario*0.15;
    }
    else
    {
        if(salario<1000)
        {
            reajuste=salario*0.1;
        }
        else
        {
            reajuste=salario*0.05;
        }
    }

    printf("o reajuste do salario eh R$%0.2f",reajuste);

    return 0;
}
