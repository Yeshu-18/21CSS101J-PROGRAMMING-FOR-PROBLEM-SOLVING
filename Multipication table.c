#include <stdio.h>
int main() {
  printf("Roll number = RA2211042010017\n");
  int n, i;
  printf("Enter an integer: ");
  scanf("%d", &n);
  for (i = 1; i <= 10; ++i) 
  printf("%d * %d = %d \n", n, i, n * i);
}
