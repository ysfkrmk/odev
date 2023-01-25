#include <stdio.h>

void main() {
    int x, y=0, z=0;
    
    printf("Bir sayi giriniz: ");
    scanf("%d", &x);
    
    while (z<10) {
        z++;
        y+=x;
    }
    
    printf("\n\n%d",y);
    
}