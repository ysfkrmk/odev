#include <stdio.h>

void main ()
{
  int sayi1, sayi2, GCD=1, LCM, sayac=1;
  
  printf("Birinci sayiyi yazin: ");
  scanf("%d", &sayi1);
  
  printf("Ikinci sayiyi yazin: ");
  scanf("%d", &sayi2);
  
  do {
      if (sayi1%sayac==0 && sayi2%sayac==0) {
          GCD = sayac;
          sayac++;
      } else {
          sayac++;
      }
  } while (sayi1>sayac || sayi2>sayac);
  
  printf("\n\nEn Buyuk Ortak Boleni : %d, %d, %d", GCD);
}