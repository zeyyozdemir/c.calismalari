#include <stdio.h>
#include <stdlib.h>

/* Bir havayolu şirketi yolcuları için bagaj sınırlaması uygulamaktadır. Her yolcunun el için 8, normal için 15kg bagaj hakkı
bulunmaktadır. Eğer yolcular el haklarını geçerse kilogram başına 4 TL, normal bagaj haklarını geçerlerse kilogram başına 5TL 
ödeme yapmak durumundadır.
Buna göre klavyeden el ve normal bagajlarının kg olarak ağırlığını giren yolcunun ödemesi gereken ücreti hesaplayan program kodu: */ 


int main()
{

    int elbagaji, bagaj, ucret = 0;

    printf("el bagajinizin agirligi: ");
    scanf("%d", &elbagaji);

    printf("bagajinizin agirligi: ");
    scanf("%d", &bagaj);

    if (elbagaji > 8)
    {
        ucret = ucret + 4 * (elbagaji - 8);
    }

    if (bagaj > 15)
    {
        ucret = ucret + 5 * (bagaj - 15);
    }

    printf("Odemeniz gereken tutar: %d", ucret);

    return 0;
}
