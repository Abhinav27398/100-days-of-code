#include <stdio.h>

// Structure definition
struct Employee {
    int emp_id;
    char name[50];
    float salary;
};

int main() {
    FILE *fp;
    struct Employee emp;
    int choice;

    // Write data to binary file
    fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    printf("Enter Employee Details\n");
    printf("Employee ID: ");
    scanf("%d", &emp.emp_id);

    printf("Name: ");
    scanf("%s", emp.name);

    printf("Salary: ");
    scanf("%f", &emp.salary);

    // Write structure to file
    fwrite(&emp, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("\nEmployee data written to binary file successfully.\n");

    // Read data from binary file
    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    printf("\n--- Reading Employee Data From File ---\n");

    while (fread(&emp, sizeof(struct Employee), 1, fp)) {
        printf("Employee ID: %d\n", emp.emp_id);
        printf("Name: %s\n", emp.name);
        printf("Salary: %.2f\n", emp.salary);
    }

    fclose(fp);

    return 0;
}
