#include<stdio.h>

int main(void) 
{
    float A, B, C, D, SOMA, MULT;

    printf("\nInsira um numero inteiro: "); scanf("%f", &A);
    printf("Insira um numero inteiro: "); scanf("%f", &B);
    SOMA = A + B;
    MULT = A * B;
    printf("\nResultado da Soma: %4.2f", SOMA);
    printf("\nResultado da Multiplicação: %4.2f\n", MULT); 

    printf("\nInsira um numero inteiro: "); scanf("%f", &A);
    printf("Insira um numero inteiro: "); scanf("%f", &C);
    SOMA = A + C;
    MULT = A * C;
    printf("\nResultado da Soma: %4.2f", SOMA);
    printf("\nResultado da Multiplicação: %4.2f\n", MULT);

    printf("\nInsira um numero inteiro: "); scanf("%f", &A);
    printf("Insira um numero inteiro: "); scanf("%f", &D);
    SOMA = A + D;
    MULT = A * D;
    printf("\nResultado da Soma: %4.2f", SOMA);
    printf("\nResultado da Multiplicação: %4.2f\n", MULT);

    printf("\nInsira um numero inteiro: "); scanf("%f", &B);
    printf("Insira um numero inteiro: "); scanf("%f", &C);
    SOMA = B + C;
    MULT = B * C;
    printf("\nResultado da Soma: %4.2f", SOMA);
    printf("\nResultado da Multiplicação: %4.2f\n", MULT);

    printf("\nInsira um numero inteiro: "); scanf("%f", &B);
    printf("Insira um numero inteiro: "); scanf("%f", &D);
    SOMA = B + D;
    MULT = B * D;
    printf("\nResultado da Soma: %4.2f", SOMA);
    printf("\nResultado da Multiplicação: %4.2f\n", MULT);

    printf("\nInsira um numero inteiro: "); scanf("%f", &C);
    printf("Insira um numero inteiro: "); scanf("%f", &D);
    SOMA = C + D;
    MULT = C * D;  
    printf("\nResultado da Soma: %4.2f", SOMA);
    printf("\nResultado da Multiplicação: %4.2f\n\n", MULT);
    
    return 0;
}