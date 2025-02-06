#include <stdio.h>
int main() {
  int n, i, f = 1;
  scanf("%d", &n);
  if (n <= 1)
   return printf("Invalid input"), 0;
  for (i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      f = 0;
      break;
    }
  }
  printf("%s", f ? "Prime" : "Not Prime");
  return 0;
}