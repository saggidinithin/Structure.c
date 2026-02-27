#include <stdio.h>
#include <string.h> // Required for strcpy

struct Student {
    char name[50];
    int rollNo;
    float grade;
};

int main() {
    struct Student s1;

    // Assigning values to members
    strcpy(s1.name, "Nithin");
    s1.rollNo = 101;
    s1.grade = 3.5;

    // Displaying values
    printf("Student Details:\n");
    printf("Name: %s\n", s1.name);
    printf("Roll Number: %d\n", s1.rollNo);
    printf("GPA: %.2f\n", s1.grade);

    return 0;
}
