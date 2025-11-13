    /*
Question:
Store multiple student records (name, roll number, marks) into a file using fprintf().
Then read them using fscanf() and display each record.
*/

#include <stdio.h>

int main() {
    FILE *file;
    int n;

    // Input number of students
    printf("Enter number of students: ");
    scanf("%d", &n);

    // Open file in write mode
    file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Error: Could not open file for writing.\n");
        return 1;
    }

    // Write student records
    for (int i = 0; i < n; i++) {
        char name[50];
        int roll;
        float marks;

        printf("\nEnter details for student %d\n", i + 1);
        printf("Name: ");
        scanf("%s", name);
        printf("Roll Number: ");
        scanf("%d", &roll);
        printf("Marks: ");
        scanf("%f", &marks);

        // Write record to file
        fprintf(file, "%s %d %.2f\n", name, roll, marks);
    }

    fclose(file);
    printf("\nData successfully written to students.txt\n");

    // Open file in read mode
    file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open file for reading.\n");
        return 1;
    }

    // Read and display records
    printf("\nStudent Records:\n");
    char name[50];
    int roll;
    float marks;

    while (fscanf(file, "%s %d %f", name, &roll, &marks) == 3) {
        printf("Name: %-10s | Roll No: %d | Marks: %.2f\n", name, roll, marks);
    }

    fclose(file);
    return 0;
}
