#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int posiition = 0;
    while((n&1)==0){
        n>>=1;
        posiition++;
    }
    printf("%d\n",posiition);
    return 0;
}