#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if(n%400==0){
        printf("Leap Year\n");
    }else{
        printf("Not a Leap Year\n");
    }
    return 0;
}