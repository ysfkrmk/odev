#include <stdio.h>
#include <math.h>

void main () {
    int ustLimit, sayi, sayiKlon, sayac0=1, sayac=0, sayac2=1, basamak, uzunluk, toplam=0, temp=1;
    
    printf("Ust limit giriniz: ");
    scanf("%d", &ustLimit);
    
    for (sayac0; sayac0<ustLimit; sayac0++) {
        sayi = sayac0;
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
            printf("%d Guclu Sayidir\n", sayiKlon);
        }
        
        toplam=0;
        sayac=0;
    }
}