#include <stdio.h>
int checkPrimeNumber(int n);
int main() {

  int n1, n2, i,flag;

  printf("Enter two numbers(intervals): ");
  scanf("%d %d", &n1, &n2);

  if (n1 > n2) {
    n1 = n1 + n2;
    n2 = n1 - n2;
    n1 = n1 - n2;
  }

  printf("Prime numbers between %d and %d are: ", n1, n2);
  for (i = n1 + 1; i < n2; ++i) {

    flag = checkPrimeNumber(i);

    if (flag == 2) {
      printf("%d ", i);
    }
  }

  return 0;
}

int checkPrimeNumber(int n) {
int counter = 0;

  for (int j = 1; j <= n;j++) {

    if (n % j == 0) {
        counter++;
    }
  }

  return counter;
}