#include <stdio.h>

void main() {
    int sayi;
    
    printf("Bir sayi yaz: ");
    scanf("%d", &sayi);
    
    if (sayi%2==0) {
        printf("\n\nBu sayi cifttir");
    } else {
        printf("\n\nBu sayi tektir");
    }
}