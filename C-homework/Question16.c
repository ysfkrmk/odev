#include <stdio.h>

void main() {
    int sayi, toplam=0;
    
    printf("Lutfen Bir sayi yaz: ");
    scanf("%d", &sayi);
    
    while (sayi<2000) {
        printf("%d\n",sayi);
        toplam += sayi;
        sayi++;
    }
    
    printf("\nToplam: %d", toplam);
}