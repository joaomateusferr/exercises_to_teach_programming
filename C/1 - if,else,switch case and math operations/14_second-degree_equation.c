#include <stdio.h>
#include <stdlib.h>
#include <math.h> //add to use sqrt

int main() {

    float a, b, c, delta, x1, x2;

    printf("Enter the values of a b and c from a 2 degree equation\n");

    printf("Enter the a value\n");
    scanf("%f",&a);

    printf("Enter the b value\n");
    scanf("%f",&b);

    printf("Enter the c value\n");
    scanf("%f",&c);

    printf("\nYour equation is: %gx2 + %gx+ %g\n",a,b,c);

    delta=(b*b)-(4*a*c);

    x1=((-b)+sqrt(delta))/(2*a);
    x2=((-b)-sqrt(delta))/(2*a);

    if(delta > 0) {
        printf("x1 = %0.2f\nx2 = %0.2f\n\n",x1,x2);
    } else {
        if(delta == 0) {
            printf("x1 = x2 = %g\n",x1);
        } else {
             printf("There is no root\n");
        }
    }

    return 0;
}
