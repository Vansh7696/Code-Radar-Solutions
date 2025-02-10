#include <stdio.h>
int main() {
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    int leading_zero = 1;
    for (int i = 31; i >= 0; i--) {
        // Shift the number 'n' right by 'i' positions and mask with 1 to extract the bit
        int bit = (n >> i) & 1;

        // Check if this bit is a 1 or 0 and print accordingly
        if (bit == 1) {
            leading_zero = 0;  // We encountered the first '1', so stop skipping
            printf("%d", bit);
        } else if (leading_zero == 0) {
            // Print 0s only after the first '1' has been printed
            printf("%d", bit);
        }
    }

    // Handle the case where the number is 0 (it would print nothing otherwise)
    if (leading_zero) {
        printf("0");
    }

    printf("\n");
    return 0;
}
