// Author: Ayush
// Program to calculate area and circumference of a circle

#include <stdio.h>

int main() {
    float radius, area, circumference;
    float pi = 3.14;

    // taking radius input from user
    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    // calculating area
    area = pi * radius * radius;

    // calculating circumference
    circumference = 2 * pi * radius;

    // printing results
    printf("Area = %.2f\n", area);
    printf("Circumference = %.2f\n", circumference);

    return 0;
}
