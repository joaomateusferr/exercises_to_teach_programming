/*
Make an algorithm that calculates and writes a table of degrees Centigrade as a function of degrees Farenheit, ranging from 50 to 150 of 1 in 1.
Use the formula C = (F - 32) * 5/9, where F is the temperature in Fahrenheit and C is the temperature in Celsius.
*/
#include <stdio.h>
#include <stdlib.h>

int main() {

    int f;
    float c;

    for(f = 50 ; f < 151 ; f++) {
        c = ((5.0/9)*(f-32));
        printf("%i %0.1f \n",f,c);
    }

    return 0;
}
