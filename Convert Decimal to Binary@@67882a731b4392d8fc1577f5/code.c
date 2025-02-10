#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int leading_zero = 1;
    for (int i = 31; i >= 0; i--) {
        int bit = (n >> i) & 1;
        if (bit == 1) {
            leading_zero = 0; 
            printf("%d", bit);
        } else if (leading_zero == 0) {
            printf("%d", bit);
        }
    }
    if (leading_zero) {
        printf("0");
    }
    printf("\n");
    return 0;
}
