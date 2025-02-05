#include <stdio.h>
int main() {
    unsigned int n;
    scanf("%u",&n);
    printf("%d\n",__builtin_clz(n) );
    return 0;
}