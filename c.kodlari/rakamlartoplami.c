#include <stdio.h>
#include <stdlib.h>

int main()
{

    int sayi, yuzler, onlar, birler, toplam;

    printf("Uc basamakli bir sayi girin: ");
    scanf("%d", &sayi);

    yuzler = sayi / 100;
    onlar = (sayi / 10) % 10;
    birler = sayi % 10;

    toplam = yuzler + onlar + birler;

    printf("%d sayisinin rakamlari toplami: %d ", sayi, toplam);

    return 0;
}