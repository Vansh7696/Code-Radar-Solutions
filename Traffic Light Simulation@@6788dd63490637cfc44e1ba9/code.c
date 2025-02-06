#include <stdio.h>

int main() {
    char input;

    scanf(" %c", &input); // Read input, consume any leading whitespace

    if (input == 'R') {
        printf("Stop\n");
    } else if (input == 'G') {
        printf("Go\n");
    } else if (input == 'Y') {
        printf("Slow Down\n");
    } else {
        printf("Invalid input\n");
    }

    return 0;
}