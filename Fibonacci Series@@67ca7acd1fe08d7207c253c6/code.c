#include <stdio.h>

void fibonacciSeries(int n) {
    if (n <= 0) {
        return;
    }
    if (n == 1) {
        printf("0\n");
        return;
    }

    int first = 0, second = 1, next;
    printf("%d %d", first, second);

    for (int i = 3; i <= n; i++) {
        next = first + second;
        printf(" %d", next);
        first = second;
        second = next;
    }
    printf("\n");
}

