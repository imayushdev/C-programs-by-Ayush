// Program to find area and perimeter of rectangle
// Author: Ayush

#include <stdio.h>

int main() {
    float length, breadth, area, perimeter;

    // getting input
    printf("Enter length: ");
    scanf("%f", &length);

    printf("Enter breadth: ");
    scanf("%f", &breadth);

    // calculations
    area = length * breadth;
    perimeter = 2 * (length + breadth);

    // showing output
    printf("Area = %.2f\n", area);
    printf("Perimeter = %.2f\n", perimeter);

    return 0;
}
