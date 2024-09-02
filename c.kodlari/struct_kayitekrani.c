

// Struct yapısı kullanılarak öğrenci kayıt ekranı oluşturma kodu

struct kayit
{
    char ad[20];
    char soyad[20];
    int dogumyili;
    int telefonno;
    char anneadi[20];
    char babaadi[20];
};

struct kayit ogr;

int main()
{

    printf("Adi: ");
    scanf("%s", &ogr.ad);

    printf("Soyadi: ");
    scanf("%s", &ogr.soyad);

    printf("Dogum Yili: ");
    scanf("%d", &ogr.dogumyili);

    printf("Telefon numarasi:");
    scanf("%d", &ogr.telefonno);

    printf("Anne Adi: ");
    scanf(" %s", &ogr.anneadi);

    printf("Baba Adi: ");
    scanf("%s", &ogr.babaadi);

    printf("\n\n");

    printf("Kayit olusturuldu:\n");
    printf("Ogrencinin adi : %s\n", ogr.ad);
    printf("Ogrencinin soyadi: %s\n", ogr.soyad);
    printf("Ogrencinin dogum yili: %d\n", ogr.dogumyili);
    printf("İletisim numarasi:%d\n", ogr.telefonno);
    printf("Anne adi: %s\n", ogr.anneadi);
    printf("Baba adi: %s\n", ogr.babaadi);

    return 0;