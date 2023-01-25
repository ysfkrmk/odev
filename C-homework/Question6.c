#include <stdio.h>

void main() {
    int lengthValue;
    double centimeterValue;
    
    printf("Bir uzunluk degeri yazin: ");
    scanf("%d", &lengthValue);
    
    centimeterValue = lengthValue * 30.48;
    
    printf("\nSantimetre donusumu: %lf", centimeterValue);
}