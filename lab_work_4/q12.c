#include <stdio.h>

int main() {
    float side1, side2, side3;

    printf("Enter the length of side 1: ");
    scanf("%f", &side1);

    printf("Enter the length of side 2: ");
    scanf("%f", &side2);

    printf("Enter the length of side 3: ");
    scanf("%f", &side3);

    if (side1 > 0 && side2 > 0 && side3 > 0) {
        if (side1 == side2 && side2 == side3) {
            printf("It's an equilateral triangle.\n");
        } else if (side1 == side2 || side1 == side3 || side2 == side3) {
            printf("It's an isosceles triangle.\n");
        } else {
            printf("It's a scalene triangle.\n");
        }
    } else {
        printf("Invalid input. Please enter positive lengths for all sides.\n");
    }

    return 0;
}

