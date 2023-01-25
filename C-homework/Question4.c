#include <stdio.h>

void main() {
    int temperature;
    
    printf("Bir sicaklik degeri giriniz: ");
    scanf("%d", &temperature);
    
    if (temperature>0) {
        printf("\n\nBu deger donma noktasindan daha yuksektir.");
    } else {
        printf("\n\nBu deger donma noktasindan daha dusuktur.");
    }
}