#include <stdio.h>
#include <math.h>

void main () {
    int number, numberClon, newNumber, length, counter1 = 1, digit;
    
    printf("Lutfen Bir sayi yazin: ");
    scanf("%d", &number);
    
    numberClon = number;
    length = (int)log10(number) + 1;
    
    for (counter1; counter1<=length; counter1++) {
        digit = number%10;
        number = number/10;
        newNumber+=digit * pow(10, length-counter1);
    }
    
    if (numberClon==newNumber) {
        printf("%d Palindrom sayidir", numberClon);
    } else {
        printf("%d Palindrom sayi degildir", numberClon);
    }
}