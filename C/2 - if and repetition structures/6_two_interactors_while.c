/*
Mary is 1.50m tall and grows 2cm per year, while John is 1.10m tall and grows 3cm per year.
Build an algorithm that calculates and writes how many years it will take for José to be bigger than Maria.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int m = 150, j = 110, year = 0;

    while(m >= j) {

        printf("%i %0.2f %0.2f\n", year,m/100.0,j/100.0);
        year++;
        j = j + 3;
        m = m + 2;
    }

    printf("\n%i years for John to be taller than Mary",year);

    return 0;
}
