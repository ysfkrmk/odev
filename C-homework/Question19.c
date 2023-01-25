#include <stdio.h>

void main() {
    int sayi, y=1;
    
    printf("Lutfen Bir sayi yazin: ");
    scanf("%d", &sayi);
    
    for (y; y<=10; y++) {
        printf("%d x %d = %d\n", sayi, y, sayi*y);
    }
}