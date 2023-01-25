#include <stdio.h>
#include <math.h>

void main ()
{
  int sayi, sayiKlon, uzunluk, kontrolcu=0, sayac=1, basamak, ustLimit, kontrolcuUst=0;
  
  printf("Ust limit giriniz: ");
  scanf("%d", &ustLimit);
  
  for (kontrolcuUst; kontrolcuUst<ustLimit; kontrolcuUst++) {
      sayi = kontrolcuUst;
      sayiKlon = kontrolcuUst;
      sayac=0;
      kontrolcu=0;
      uzunluk = (int)log10(kontrolcuUst)+1;
  
      for (sayac; sayac<uzunluk; sayac++) {
          basamak=sayi%10;
          kontrolcu+=pow(basamak, uzunluk);
          sayi=sayi/10;
      }
  
      if (sayiKlon==kontrolcu && uzunluk!=1) {
          printf("\n\n%d Armstrong Sayisidir", sayiKlon);
      }
  } 
  
}