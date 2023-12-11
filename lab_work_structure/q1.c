#include <stdio.h>

typedef struct DateOfBirth {
    int day;
    int month;
    int year;
} DateOfBirth;

typedef struct Marks {
    float english;
    float mathematics;
    float computerScience;
} Marks;

typedef struct Name{
    char firstName[50];
    char middleName[50];
    char lastName[50];
} Name;

typedef struct Student{
    int rollNumber;
    Name name;
    char gender;
    DateOfBirth dob;
    Marks marks;
} Student;



int main() {
    // Example usage:
    Student student1;

    // Assign values to the structure members
    student1.rollNumber = 12345;
    student1.name = {"John", "Doe", ""}; 
    student1.gender = 'M';
    student1.dob = {1, 1, 2000};
    student1.marks = {85.5, 90.0, 78.5};

    // Access and print the information
    printf("Roll Number: %d\n", student1.rollNumber);
    printf("Name: %s %s %s\n", student1.name.firstName, student1.name.middleName, student1.name.lastName);
    printf("Gender: %c\n", student1.gender);
    printf("Date of Birth: %d/%d/%d\n", student1.dob.day, student1.dob.month, student1.dob.year);
    printf("Marks: English=%.2f, Mathematics=%.2f, Computer Science=%.2f\n", student1.marks.english, student1.marks.mathematics, student1.marks.computerScience);

    return 0;
}
