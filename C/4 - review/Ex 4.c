#include <stdio.h>
#include <stdlib.h>

int main()
{
    float lab,sem,fin,media;

    printf("insira a nota de laboratorio\n");
    scanf("%f",&lab);

    printf("insira a nota da prova semestral\n");
    scanf("%f",&sem);

    printf("insira a nota da prova final\n");
    scanf("%f",&fin);

    media=(lab*0.2)+(sem*0.3)+(fin*0.5);

    if(media<3)
    {
        printf("reprovado\n");
    }
    else
    {
        if(media<5)
        {
            printf("em recuperação\n");
        }
        else
        {
            printf("aprovado\n");
        }
    }



    printf("media: %0.2f",media);

    return 0;
}
