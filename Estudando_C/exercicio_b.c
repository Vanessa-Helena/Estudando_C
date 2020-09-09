#include<stdio.h>

int main(void) {
    float TEMPO, VELOCIDADE, DISTANCIA, LITROS_USADOS;
    printf("\nDigite o tempo da viagem: "); scanf("%f", &TEMPO);
    printf("Digite a velocidade média da viagem: "); scanf("%f", &VELOCIDADE);
    DISTANCIA = TEMPO * VELOCIDADE;
    LITROS_USADOS = DISTANCIA/12;
    printf("\nA velocidade média da viagem será de: %4.2f", VELOCIDADE);
    printf("\nO tempo da viagem será de: %4.2f", TEMPO);
    printf("\nA distancia percorrida na viagem será de: %4.2f", DISTANCIA);
    printf("\nA quantidade de litros usados na viagem será de: %4.2f\n\n", LITROS_USADOS);
}