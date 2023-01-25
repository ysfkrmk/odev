#include <stdio.h>
#include <math.h>

void main() {
    int sayi, sayiUzunluk=0;
    
    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);
    
    sayiUzunluk = (int)log10(sayi) + 1;
    
    printf("\nSayinin uzunlugu: %d", sayiUzunluk);
}