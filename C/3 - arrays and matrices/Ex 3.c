#include <stdio.h>
#include <stdlib.h>

#define MAX 3

int main() {

    int a[MAX], b[MAX], d[MAX], i;
    char c[MAX];

    for(i = 0 ; i < MAX ; i++) {

        scanf("%i",&a[i]);
        scanf("%i",&b[i]);
        scanf("%s",&c[i]);

        switch(c[i]) {

        case '+':
            d[i]=a[i]+b[i];
            printf("%i\n",d[i]);
            break;

        case '-':
            d[i]=a[i]-b[i];
            printf("%i\n",d[i]);
            break;

        case '*':
            d[i]=a[i]*b[i];
            printf("%i\n",d[i]);
            break;

        case '/':
            if(b[i]!=0) {
                d[i]=a[i]/b[i];
                printf("%i\n",d[i]);
            } else {
                printf("Erro\n");
            }
            break;
        }
    }

    return 0;
}
