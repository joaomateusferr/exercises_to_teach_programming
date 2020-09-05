#include <stdio.h>
#include <stdlib.h>

int main() {

    int a;

    printf("Insert a number\n");
    scanf("%i",&a);

    if(a > 0) {
        printf("It's positive\n");
    }

    if(a < 0) {
        printf("It's negative\n");
    }

    if(a == 0) {
        printf("It's zero\n");
    }

    return 0;
}
