#include <stdio.h>

int main() {

  int number, i , flag=0;
  printf("Enter a positive integer : ");
  scanf("%d", &number);
  
  for (i=1 ; i<=number/2 ; ++i){
      if (number % 2 == 0){
      flag=1; 
      }
  }
  if (flag==0){
      printf("The number %d is not a prime number", number);
     
  }
  else {
      printf("The number %d is a prime number", number);
  }
  
  return 0;
}
