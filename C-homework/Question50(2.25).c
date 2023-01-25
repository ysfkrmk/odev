#include <stdio.h>

void main() {
    int satir, sayac=1, ayirici, kontrol2=1;
    
    printf("Satýr numarasý giriniz: ");
    scanf("%d", &satir);
    
    ayirici = satir;
    
    for (sayac; sayac<satir; sayac++) {
        for (ayirici; sayac<ayirici; ayirici--) {
            printf(" ");
        }
        ayirici = satir;
        for (kontrol2; kontrol2<sayac; kontrol2++) {
            printf("1 ");
        }
        kontrol2=1;
        printf("\n");
    }
}