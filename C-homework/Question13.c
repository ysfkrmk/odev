#include <stdio.h>

void main() {
    int x=6, y=10, z=1;
    
    for (z; z<=y; z++) {
        printf("%d x %d = %d\n", x, z, x*z);
    }
}