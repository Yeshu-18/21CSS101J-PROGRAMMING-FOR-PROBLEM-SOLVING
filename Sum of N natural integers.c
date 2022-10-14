#include <stdio.h>
int main() 
{
    printf("Roll number = RA2211042010017\n");
    int n, i, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for (i = 1; i <= n; ++i) 
        sum += i;
    printf("Sum = %d", sum);
    return 0;
}
