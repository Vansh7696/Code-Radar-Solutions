#include <stdio.h>

int main() {
    int n, i, j, num;
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n - i; j++) {
            printf(" ");
        }
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
