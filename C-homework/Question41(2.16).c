#include <stdio.h>
#include <math.h>

void main () {
    int tour=0, tour2=0, x, sum=0, expo=1;
    
    printf("Bir sayi giriniz: ");
    scanf("%d", &x);
    
    while(1) {
        tour2 = tour;
        tour+=2;
        
        if (tour2!=0) {
            expo *= tour2;
            tour2--;
        } else {
            if (tour%2==0) {
                sum += pow(x, tour/expo);
            } else {
                sum -= pow(x, tour/expo);
            }
        }
        
        if (tour==x) {
            sum -= 1;
            break;
        }
    }
}