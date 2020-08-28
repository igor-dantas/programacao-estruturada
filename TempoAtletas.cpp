#include <stdio.h>
int main (void)
{
    float a[8], atletaM, media, maior = 0, somador = 0, soma;
    for (int i = 0; i<8; i++)
    {
        printf("digite o tempo do %io atleta em minutos:", i+1);
        scanf("%f", &a[i]);
        somador = somador + a[i];
        media = somador / 8;
        if(maior < a[i])
        {
            maior = a[i];
        }
    }
    printf("o maior tempo eh %.1f", maior);
    media = somador /8;
    for(int i = 0; i<8; i++)
    {
        if(a[i] > media)
        atletaM++;
    }
    printf("\nA media eh: %.1f", media);
    printf("\nA porcentagem dos atletas acima da media eh %.1f porcento", atletaM/8 * 100);
return 0;
}
//a[0]!=a[1]!=...a[8]
