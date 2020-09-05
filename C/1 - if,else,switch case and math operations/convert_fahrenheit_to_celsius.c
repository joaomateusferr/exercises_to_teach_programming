#include <stdio.h>
#include <stdlib.h>

int main(){
    
    float c, f;

    printf("Enter the temperature in fahrenheit\n");
    scanf("%f",&f);

    c = (f-32)*5/9;

    printf("The temperature in celsius is %g\n",c);

    return 0;
}
