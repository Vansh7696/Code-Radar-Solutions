#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Outer loop: for each row, starting from 1 up to n
    for (int i = 1; i <= n; i++) {
        // Inner loop: prints numbers from 1 up to (n-i+1)
        for (int j = 1; j <= n - i + 1; j++) {
            printf("%d", j);
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
