#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 2

struct pessoa
{
    char sexo;
    int idade,nf;
    float salario;
};

int main()
{
    struct pessoa regiao [MAX];
    int i;
    float soma=0,media;

    for(i=0;i<MAX;i++)
    {
        printf("insira os dados da pessoa %i\n",i+1);

        do
        {
            printf("insira o sexo (f ou m)\n");
            fflush(stdin);
            regiao[i].sexo=getchar();

        } while((toupper(regiao[i].sexo)!='F')&&(toupper(regiao[i].sexo)!='M'));

        printf("insira a idade\n");
        scanf("%i",&regiao[i].idade);

        printf("insira o numero de filhos\n");
        scanf("%i",&regiao[i].nf);

        printf("insira o salario\n");
        scanf("%f",&regiao[i].salario);

        printf("\n\n");

        soma=soma+regiao[i].salario;
    }

    media=soma/MAX;

    printf("a media dos salarios eh %0.2f\n",media);

    return 0;
}
