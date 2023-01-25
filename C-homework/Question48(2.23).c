#include <stdio.h>

void main () {
    int ondalikSayi;
    
    printf("Ondalik sayi (decimal) giriniz: ");
    scanf("%d", &ondalikSayi);
    
    while (ondalikSayi!=0) {
        if (ondalikSayi%2==0) {
            ondalikSayi/=2;
            printf("0");
        } else {
            ondalikSayi--;
            ondalikSayi/=2;
            printf("1");
        }
    }
    
    printf("\n\nAlttan okuyunuz");
    
}