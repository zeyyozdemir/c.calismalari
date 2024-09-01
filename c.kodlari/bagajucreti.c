#include <stdio.h>
#include <stdlib.h>

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