#include <stdio.h>
#include <stdlib.h>

/* Klavyeden girilen üç basamaklı bir sayının rakamlarını bulan program kodu: */

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
