#include <stdio.h>

void main() {
    int x=1, y, z;
    
    printf("Bir sayi yaz: ");
    scanf("%d", &z);
    printf("Bir sayi yaz: ");
    scanf("%d", &y);
    
    while (y<=z) {
        printf("%d\n", y);
        y++;
    }
}