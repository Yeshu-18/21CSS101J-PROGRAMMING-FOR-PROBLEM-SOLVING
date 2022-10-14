#include <stdio.h>
int main() 
{
  printf("Roll number = RA2211042010017\n");
  int first, second, temp;
  printf("Enter the first number: ");
  scanf("%d", &first);
  printf("Enter the second number: ");
  scanf("%d", &second);
  temp = first;
  first = second;
  second = temp;
  printf("First number after swapping is = %d\n", first);
  printf("Second number after swapping is = %d\n", second);
}
  
