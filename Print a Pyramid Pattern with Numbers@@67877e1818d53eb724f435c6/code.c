#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Input the number of rows for the pyramid

    // Outer loop: Control the number of rows (height of the pyramid)
    for (int i = 1; i <= n; i++) {
        
        // Print leading spaces to center the pyramid
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Inner loop: Print numbers from 1 to i
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);  // Print the number
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}

