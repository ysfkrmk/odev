#include <stdio.h>

void main() {
    int sayi, y=1;
    float toplam=0;
    
    printf("Lutfen Bir sayi yazin: ");
    scanf("%d", &sayi);
    
    while (y<sayi) {
        toplam+=1/y;
        y+=2;
    }
    
    printf("\nToplam: %f", toplam);
}