#include <stdio.h>
int main(){
    float height,weight,bmi;
    printf("Enter the height : ");
    scanf("%f", &height);
    printf("Enter the weight : ");
    scanf("%f", &weight);
    bmi=weight/(height*height);
    printf("The BMI index is : %.2f",bmi);
}
