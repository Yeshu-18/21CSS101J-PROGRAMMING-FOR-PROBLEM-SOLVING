#include <stdio.h>
int main() {
  printf("Roll number = RA2211042010017\n");
  int number;
  printf("Enter a number:");
  scanf("%d",&number);
  
  if (number%2==0)
  printf("The number %d is EVEN",number);
  else
  printf("The number %d is ODD",number);
}
  
