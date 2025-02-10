#include <stdio.h>

int main() {
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);

    // Start from the most significant bit (31st bit for a 32-bit integer)
    for (int i = 31; i >= 0; i--) {
        // Shift the number 'n' right by 'i' positions and mask with 1 to extract the bit
        int bit = (n >> i) & 1;
        printf("%d", bit);
    }
    
    printf("\n");
    return 0;
}
