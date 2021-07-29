
#include <stdio.h>

int main()
{
  
    float a,b,result;
    printf ("Insert the price of the tomatoes today: "); scanf_s("%f",&a);
    printf("Insert Tomatoes kilograms: "); scanf_s("%f", &b);
    result = a * b;
    printf("Total price: %0.2f", result);
}   

