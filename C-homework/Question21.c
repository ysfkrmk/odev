#include <stdio.h>
#include <math.h>

void main() {
    int sayi, sonRakam, ilkRakam;
    
    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);
    
    ilkRakam = sayi%10;
    
    sonRakam = (int)(sayi / pow(10, (int)log10(sayi)));
    
    printf("\nSayinin ilk rakami: %d", ilkRakam);
    printf("\nSayinin son rakami: %d", sonRakam);
}