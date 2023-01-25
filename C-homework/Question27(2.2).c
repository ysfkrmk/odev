#include <stdio.h>
#include <math.h>

void main ()
{
  int a, b, c, x1, x2;
  
  printf("Formul ax^2 + bx + c\n\na, b ve c'yi sirayla giriniz\na > ");
  scanf("%d", &a);
  printf("b > ");
  scanf("%d", &b);
  printf("c > ");
  scanf("%d", &c);
  
  x1 = (-b + sqrt(b*b-4*a*c))/2*a;
  x2 = (b + sqrt(b*b-4*a*c))/2*a;
  
  printf("\n\nKokler:\n#> %d\n#> %d", x1,x2);
}