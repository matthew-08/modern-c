#include <stdio.h>

int main() {
    char input[18]; // 16 digits + '\n' + '\0'

    printf("Enter a number (1-16 digits): ");
    if (fgets(input, sizeof(input), stdin) != NULL) {
        // Print each character if it's a digit
        for (int i = 0; input[i] != '\0'; i++) {
            if (input[i] >= '0' && input[i] <= '9') {
                printf("%c ", input[i]);
            }
        }
        printf("\n");
    }

    return 0;
}