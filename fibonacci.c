#include <stdio.h>

// 再帰的
unsigned long int fib_recursive(int n) {
  if(n < 2) {
    return 1;
  }

  return fib_recursive(n - 1) + fib_recursive(n - 2);
}

unsigned long int fib_iterative(int n) {
  unsigned long int f0 = 1;
  unsigned long int f1 = 1;
  for(int i=2; i <= n; i++) {
    unsigned long int temp = f1 + f0;
    f0 = f1;
    f1 = temp;
  }

  return f1;
}

int main(void) {
  int n;
  scanf("%d", &n);

  printf("%ld\n%ld\n", fib_recursive(n), fib_iterative(n));
}
