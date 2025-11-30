#include <stdio.h>

// Structure definition
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s;
    struct Student *ptr;   // Pointer to structure

    // Assign address of structure to pointer
    ptr = &s;

    // Modify data using pointer
    printf("Enter student name: ");
    scanf("%s", ptr->name);

    printf("Enter roll number: ");
    scanf("%d", &ptr->roll_no);

    printf("Enter marks: ");
    scanf("%f", &ptr->marks);

    // Display data using pointer
    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", ptr->name);
    printf("Roll No: %d\n", ptr->roll_no);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}
