#include <stdio.h>
#include <math.h>

void main () {
    int sayi, toplam=0;
    
    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);
    
    toplam += sayi + pow(sayi, 3) + pow(sayi, 5) + pow(sayi, 7) + pow(sayi, 9);
    
    printf("\n\n%d serinin toplamidir.", toplam);
    
}