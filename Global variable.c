#include <stdio.h>
int b;       //b is a GLOBAL VARIABLE
int main(){
  int a=10;
  b=a;
  printf("The value of global variable 'b' is = %d", b);
}
