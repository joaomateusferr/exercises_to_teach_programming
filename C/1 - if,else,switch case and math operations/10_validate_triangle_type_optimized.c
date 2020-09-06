#include <stdio.h>
#include <stdlib.h>

int main() {

    int a, b, c;

    printf("Enter sides of the triangle\n");
    scanf("%i",&a);
    scanf("%i",&b);
    scanf("%i",&c);

    if(a < b + c && b < a + c && c < a + b) {

        if(a == b && b == c) {
            printf("Equilateral triangle\n");
        } else {

            if(a != b && b != c) {
                printf("Scalene triangle\n");
            } else {
                printf("Isosceles triangle\n");
            }
        }
    } else {
        printf("não é trinagulo\n");
    }

    return 0;
}
