#include <stdio.h>
#include <stdlib.h>

int main() {

    int i, n1, n2, sum = 0;

    scanf("%i",&n1);
    scanf("%i",&n2);

    for(i = 1; i < n1 + 1; i++) {
        sum = sum + n2;
    }

    printf("\n%i X %i = %i\n",n1,n2,sum);

    return 0;
}
