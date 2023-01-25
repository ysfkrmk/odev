#include <stdio.h>
#include <math.h>

void main () {
    int sayi;
    float toplam=0, kontrol=1;
    
    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);
    
    while(sayi!=kontrol) {
        toplam+=1/kontrol;
        kontrol++;
    }
    
    printf("%lf serinin toplamidir", toplam);
}