#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for(int i=31;i>=0;i--){
        int k = n>>i;
        printf("%d",k&1);
    }
    return 0;
}