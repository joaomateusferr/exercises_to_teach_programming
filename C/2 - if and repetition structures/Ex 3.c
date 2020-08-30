#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i;
    float alturan,altan,baixan;
    char nome[30], alta[30], baixa[30];

    printf("insira o nome e a idade\n\n");

    for(i=1;i<5;i++)
    {
        fflush(stdin);
        gets(nome);
        scanf("%f",&alturan);

        if(i==1)
        {
            altan=alturan;
            baixan=alturan;
            strcpy(alta,nome);
            strcpy(baixa,nome);
        }
        else
        {
                if(alturan>altan)
            {
                altan=alturan;
                strcpy(alta,nome);
            }

            if(alturan<baixan)
            {
                baixan=alturan;
                strcpy(baixa,nome);
            }
        }

    }

    printf("\nmais alta %s\nmais baixa %s\n",alta,baixa);

    return 0;
}
