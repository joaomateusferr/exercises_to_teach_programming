#include <stdio.h>
#include <stdlib.h>

int main() {

    char c;

    printf("Insert a character\n");
    scanf("%c",&c);

    if(c == 's' || c == 'n') {
        printf("It's s or n\n");
    } else {
        printf("It's not s or n\n");
    }

    return 0;
}
