#include <stdio.h>
int main() {
    int n;
    int num=1;
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        for(char j=1;j<=i;j++){
            printf("%c ",'A'+num);
            num++;
        }
        printf("\n");
    }
    return 0;
}