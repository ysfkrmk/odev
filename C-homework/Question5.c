#include <stdio.h>

void main() {
    int fahrenheitValue;
    
    double celsiusValue;
    
    printf("Bir fahrenheit degeri girin: ");
    scanf("%d", &fahrenheitValue);
    
    celsiusValue = (fahrenheitValue - 32) * 1.8;
    
    printf("\n\nSantigrat karsiligi: %lf", celsiusValue);
}