#include <stdio.h>
int main( ) {
  printf("Roll number = RA2211042010017\n");
  int n1, n2, n3;
  printf("Enter three numbers: ");
  scanf("%d %d %d", &n1, &n2, &n3);
  if (n1 >= n2 && n1 >= n3)
    printf("The largest number is = %d", n1);
  else if (n2 >= n1 && n2 >= n3)
    printf("%The largest number is = %d", n2);
  else
    printf("The largest number is = %d", n3);
}
