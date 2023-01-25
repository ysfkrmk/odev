#include <stdio.h>
#include <math.h>

void main() {
    int sayi, y, z=1;
    
    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);
    
    y = (int)log10(sayi) + 1;
    
    for (z; z<=y; z++) {
        printf("%d ", sayi%10);
        sayi = sayi/10;
    }
}