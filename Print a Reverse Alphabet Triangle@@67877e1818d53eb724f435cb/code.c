#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        for(char j='A';j<'A'+i;j++){
            printf("%c ",j);
        }
        printf("\n");
    }
    return 0;
}