#include <stdio.h>

int n;
int SumN(int n);

int main() {
  printf("Enter the number\n");
  scanf("%d", &n);
  printf("Sum to %d is %d", n, SumN(n));
  return 0;
}

int SumN(int n) {
  if (n == 1) {
    return 1;
  }
  int SumNm1 = SumN(n - 1);
  int sumN = SumNm1 + n;
  return sumN;
}