#include <stdio.h>

void main ()
{
  int sayi, sayac=1;
  
  printf("Bir sayi giriniz: ");
  scanf("%d", &sayi);
  
  for (sayac; sayac<=sayi; sayac++) {
      printf("> %d\n", sayac);
  }
}