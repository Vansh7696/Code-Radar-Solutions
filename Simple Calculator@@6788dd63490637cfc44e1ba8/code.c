#include <stdio.h>
int main() {
    int num1, num2;
    char operator;
    if (scanf("%d %d %c", &num1, &num2, &operator) != 3) {
        printf("Error");
        return 1;
    }
    if (operator == '+') {
        printf("%d\n", num1 + num2);
    } else if (operator == '-') {
        printf("%d\n", num1 - num2);
    } else if (operator == '*') {
        printf("%d\n", num1 * num2);
    } else if (operator == '/') {
        printf("%d\n", num1 / num2);  
    } else {
        printf("Error");
    }
    return 0;
}
