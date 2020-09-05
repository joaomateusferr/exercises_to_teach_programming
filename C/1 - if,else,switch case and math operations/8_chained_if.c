#include <stdio.h>
#include <stdlib.h>

int main() {
    
    float salary, readjustment;

    printf("Enter salary amount!\n");
    scanf("%f",&salary);

    if(salary < 500) {
        readjustment = salary*0.15;
    } else {
        if(salary < 1000) {
            readjustment = salary*0.1;
        } else {
            readjustment = salary*0.05;
        }
    }

    printf("The salary readjustment is $%0.2f\n",readjustment);
    printf("The new salary is $%0.2f\n",salary+readjustment);

    return 0;
}
