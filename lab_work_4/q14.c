#include <stdio.h>

int main() {
    float physics, chemistry, biology, mathematics, computer;
    float totalMarks, percentage;
    char grade;

    printf("Enter marks in Physics: ");
    scanf("%f", &physics);

    printf("Enter marks in Chemistry: ");
    scanf("%f", &chemistry);

    printf("Enter marks in Biology: ");
    scanf("%f", &biology);

    printf("Enter marks in Mathematics: ");
    scanf("%f", &mathematics);

    printf("Enter marks in Computer: ");
    scanf("%f", &computer);

    totalMarks = physics + chemistry + biology + mathematics + computer;
    percentage = (totalMarks / 500.0) * 100;

    if (percentage >= 90) {
        grade = 'A';
    } else if (percentage >= 80) {
        grade = 'B';
    } else if (percentage >= 70) {
        grade = 'C';
    } else if (percentage >= 60) {
        grade = 'D';
    } else if (percentage >= 40) {
        grade = 'E';
    } else {
        grade = 'F';
    }

    printf("\nTotal Marks: %.2f\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);

    return 0;
}

