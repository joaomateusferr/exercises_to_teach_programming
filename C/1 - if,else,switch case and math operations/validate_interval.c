#include <stdio.h>
#include <stdlib.h>

int main() {

    int a;

    printf("Insert a number\n");
    scanf("%i",&a);

    if(a >= -1 && a <= 1) {
        printf("It's in the range between -1 and 1\n");
    } else {
        printf("It's not in the range between -1 and 1\n");
    }

    return 0;
}
