#include <stdio.h>
int main()
{
  int last_digit,i;
    printf("The number of natural numbers to be displayed are:");
    scanf("%d",&last_digit);

    for (i=1;i<=last_digit;i++)
    printf("%d\n",i);
    
  return 0;
}
