int main() {
    int rows = 5;  // Number of rows for the triangle
    // Outer loop for each row
    for (int i=1; i<=n; i++) {
        // Print stars for each row
        for (int j = 1; j < i; j++) {
            printf("* ");
        }
        printf("\n");  // Move to the next line after each row
    }
    return 0;
}
