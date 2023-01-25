#include <stdio.h>
#include <math.h>

void main () {
    int sayi, sayiKlon, sayac=0, sayac2=1, basamak, uzunluk, toplam=0, temp=1;
    
    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);
    
    sayiKlon = sayi;
    uzunluk = (int)log10(sayi) + 1;
    
    for (sayac; sayac<uzunluk; sayac++) {
        basamak=sayi%10;
        for (sayac2; sayac2<=basamak; sayac2++) {
            temp*=sayac2;
        }
        toplam+=temp;
        temp=1;
        sayac2 = 1;
        sayi=sayi/10;
    }
    
    if (sayiKlon==toplam) {
        printf("%d Guclu Sayidir", sayiKlon);
    } else {
        printf("%d Guclu Sayi degildir", sayiKlon);
    }
}