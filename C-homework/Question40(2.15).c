#include <stdio.h>
#include <math.h>

void main () {
    int sayi, sayiKlon, yeniSayi, uzunluk, sayac = 1, basamak;
    
    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);
    
    sayiKlon = sayi;
    uzunluk = (int)log10(sayi) + 1;
    
    for (sayac; sayac<=uzunluk; sayac++) {
        basamak = sayi%10;
        sayi = sayi/10;
        yeniSayi+=basamak * pow(10, uzunluk-sayac);
    }
    
    if (sayiKlon==yeniSayi) {
        printf("%d Palindrom sayisidir", sayiKlon);
    } else {
        printf("%d Palindrom sayisi degildir", sayiKlon);
    }
}