#include <stdio.h>

void main() {
    int x=1, y, z=1;
    
    printf("Bir sayi yaz: ");
    scanf("%d", &y);
    
    while (z<=y) {
        x*=z;
        z++;
    }
    
    printf("%d",x);
}