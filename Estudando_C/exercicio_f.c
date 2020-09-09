#include<stdio.h>

int main(void) 
{
    int A, B, X;

    printf("\nDigite um valor inteiro para A: "); scanf("%d", &A);
    printf("Digite outro valor inteiro agora para B: "); scanf("%d", &B);

    X = A; 
    A = B;
    B = X;

    printf("\nO valor de A agora é: %d", A);
    printf("\nE o valor de B passou a ser: %d\n\n", B);
}