#include <stdio.h>

int main() {
    int n, i, j, num;

    // Input the number of rows for the pyramid
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Loop through each row
    for(i = 1; i <= n; i++) {
        // Print spaces for left alignment (pyramid shape)
        for(j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print numbers in increasing order for each row
        num = 1;  // Start number for each row
        for(j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;  // Increment the number after printing
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
