#include <stdio.h>

void main ()
{
  //GCD -> En B�y�k Ortak B�len
  //LCM -> En K���k Ortak Kat

  int sayi1, sayi2, GCD=1, LCM, sayac=1;
  
  printf("Birinci sayiyi yazin: ");
  scanf("%d", &sayi1);
  
  printf("Ikinci sayiyi giriniz: ");
  scanf("%d", &sayi2);
  
  do {
      if (sayi1%sayac==0 && sayi2%sayac==0) {
          GCD = sayac;
          sayac++;
      } else {
          sayac++;
      }
  } while (sayi1>sayac || sayi2>sayac);
  
  LCM = (sayi1*sayi2)/GCD;
  
  printf("\n\nEn Kucuk Ortak Kat: %d, %d, %d", LCM);
}