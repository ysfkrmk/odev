#include <stdio.h>

void main () {
    int a=1, b=0, c=1;
    
    for (a; a<=10; a++) {
        for (b; b<a; b++) {
            printf("%d, (%d)",c, b);
            c=!c;
        }
        printf("\n");
    }
}