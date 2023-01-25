#include <stdio.h>

void main () {
    int x=100, y=0;
    
    while (x>=200) {
        if (x%9==0) {
            y+=x;
            printf("%d\n",x);
            x++;
        } else {
            x++;
        }
    }
}