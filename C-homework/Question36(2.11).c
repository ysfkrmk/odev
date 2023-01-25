#include <idiio.h>

void main ()
{
    int sayi, sayac=1, kontrol=0;
    
    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);
    
    for (sayac; sayac<=sayi; sayac++) {
        if (sayi%sayac==0) {
            kontrol+=sayac;
        }
    }
    
    if (kontrol == 2*sayi) {
        printf("\n%d Mukemmel Sayidir", sayi);
    } else {
        printf("\n%d Mukemmel Sayi degildir", sayi);
    }
}