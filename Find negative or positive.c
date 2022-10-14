#include <stdio.h>
int main() {
    printf("Roll number = RA2211042010017\n");
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num <= 0) {
        if (num == 0)
            printf("The number is 0");
        else
            printf("The number is a negative number");
    } 
    else
        printf("The number is a positive number");
}
