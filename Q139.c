#include <stdio.h>

// Define an enum with explicit and implicit integer values
enum Example {
    A = 5,     // assigned explicitly
    B,         // auto → 6
    C = 10,    // assigned explicitly
    D,         // auto → 11
    E          // auto → 12
};

int main() {
    printf("Enum values stored as integers:\n");
    printf("A = %d\n", A);
    printf("B = %d\n", B);
    printf("C = %d\n", C);
    printf("D = %d\n", D);
    printf("E = %d\n", E);

    return 0;
}
