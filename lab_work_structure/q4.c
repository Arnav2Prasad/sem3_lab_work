#include <stdio.h>

typedef struct {
    int numerator;
    int denominator;
} Fraction;

float convertToFloat(Fraction frac) {
    return (float)frac.numerator / frac.denominator;
}

int compareFractions(Fraction frac1, Fraction frac2) {
    float f1 = convertToFloat(frac1);
    float f2 = convertToFloat(frac2);

    if (f1 == f2) {
        return 0; 
    } else if (f1 < f2) {
        return -1; 
    } else {
        return 1; 
    }
}

int main() {
    Fraction fraction1 = {3, 4};
    Fraction fraction2 = {2, 3}; 

    int result = compareFractions(fraction1, fraction2);

    if (result == 0) {
        printf("Fractions are equal.\n");
    } else if (result == -1) {
        printf("First fraction is less than the second.\n");
    } else {
        printf("First fraction is greater than the second.\n");
    }

    return 0;
}
