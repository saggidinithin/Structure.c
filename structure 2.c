#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_number;
    float gpa;
};

int main() {
    // Declare an array of structures for 2 students and initialize
    struct Student students[2] = {
        {"Alice", 101, 3.8},
        {"Bob", 102, 3.6}
    };

    printf("Student Records:\n");

    // Loop through the array to access and print each student's details
    for (int i = 0; i < 2; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].roll_number);
        printf("GPA: %.2f\n", students[i].gpa);
    }

    return 0;
}
