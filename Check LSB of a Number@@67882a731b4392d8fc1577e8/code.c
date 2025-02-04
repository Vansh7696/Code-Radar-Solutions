#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    printf("%s\n",(a&1)?"Set":"Not Set");
    return 0;
}