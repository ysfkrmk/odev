#include <stdio.h>

void main ()
{
    int a=0, sayi, ustLimit, sayac=1, kontrol=0;
    
    printf("Ust limit giriniz: ");
    scanf("%d", &ustLimit);
    
    for (a; a<ustLimit; a++) {
        sayac = 1;
        kontrol = 0;
        sayi = a;
        for (sayac; sayac<=sayi; sayac++) {
            if (sayi%sayac==0) {
                kontrol+=sayac;
            }
        }
        
        if (kontrol == 2*sayi) {
            printf("\n%d Mukemmel Sayidir", sayi);
        }
    }
}