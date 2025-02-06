#include <stdio.h>
int main() {
    int a,b,s;
    scanf("%d%d%d",&a,&b,&s);
    if(s=='+'){
        printf("%d",a+b);
    }else if(s=='-'){
        printf("%d",a-b);
    }else if(s=='*'){
        printf("%d",a*b);
    }else if(s=='/'){
        printf("%d",a/b);
    }
    return 0;
}