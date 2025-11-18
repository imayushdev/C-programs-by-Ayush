// Author: Ayush
// Program to convert temperature from Centigrade to Fahrenheit

#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // asking user to enter temperature in centigrade
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // applying formula to convert to Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    // displaying the result
    printf("Temperature in Fahrenheit = %.2f\n", fahrenheit);

    return 0;
}
