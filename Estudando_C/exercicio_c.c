#include<stdio.h>

int main(void) 
{
    float F, C;
    printf("\nDigite a temperatura em graus Celsius: "); scanf("%f", &C);
    F = (9 * C + 160) / 5;
    printf("A temperatura em graus Fahrenheit será de: %f\n\n", F);
}