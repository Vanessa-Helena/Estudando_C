#include <stdio.h>
int main(void) 
{
    float HT, VH, PD, TD, SB, SL;
    scanf("%f", &HT);
    scanf("%f", &VH);
    scanf("%f", &PD);
    SB = HT * VH;
    TD = (PD/100) * SB;
    SL = SB - TD;
    printf("%f\n", SB);
    printf("%f\n", TD);
    printf("%f\n", SL);
    return 0;
}