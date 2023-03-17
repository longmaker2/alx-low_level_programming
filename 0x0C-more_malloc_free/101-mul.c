#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
    // Check for correct number of arguments
    if (argc != 3) {
        printf("Error\n");
        return 98;
    }

    // Check that inputs are composed of digits
    char *num1 = argv[1];
    char *num2 = argv[2];
    for (int i = 0; num1[i] != '\0'; i++) {
        if (!isdigit(num1[i])) {
            printf("Error\n");
            return 98;
        }
    }
    for (int i = 0; num2[i] != '\0'; i++) {
        if (!isdigit(num2[i])) {
            printf("Error\n");
            return 98;
        }
    }

    // Convert inputs to integers
    int x = atoi(num1);
    int y = atoi(num2);

    // Multiply the numbers and print the result
    int result = x * y;
    printf("%d\n", result);

    return 0;
}
