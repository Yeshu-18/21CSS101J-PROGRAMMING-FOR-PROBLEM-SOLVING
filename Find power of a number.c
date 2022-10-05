#include <stdio.h>

int main() {

  int base, exponent, answer=1, i;
  printf("Enter the base value : ");
  scanf("%d",&base);
  printf("Enter the exponent value (only natural numbers) : ");
  scanf("%d",&exponent);
  for (i=1; i<=exponent; ++i){
      answer*=base;
  }
  printf("%d", answer);
  
  

  return 0;
}
