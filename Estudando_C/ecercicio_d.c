#include<stdio.h>

int main(void) 
{
    float F, C;
    printf("\nDigite a temperatura em graus Fahrenheit: "); scanf("%f", &F);
    C = ((F - 32) * 5) / 9;
    printf("A temperatura em graus Celsius será de: %f\n\n", C);
}