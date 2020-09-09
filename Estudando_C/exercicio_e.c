#include<stdio.h>

int main(void) 
{
    float V, R, A;
    printf("\nDigite o raio da lata de óleo: "); scanf("%f", &R);
    printf("Digite a altura da lata de óleo: "); scanf("%f", &A);
    V = 3.14159 * R * R * A;
    printf("\nO volume da lata de óleo é de: %f\n\n", V);
}