#include <stdio.h>
int main() {
    int num1, num2;
    char operator;
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
