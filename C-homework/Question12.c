#include <stdio.h>

void main() {
    int x, y, z;
    
    printf("Bir sayi yaz: ");
    scanf("%d", &x);
    printf("Adim numarasi yaz: ");
    scanf("%d", &y);
    
    z=y;
    
    for (z; z<x; z+=y) {
        printf("\n%d",z);
    }
    
}