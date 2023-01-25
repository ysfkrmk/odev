#include <stdio.h>
#include <math.h>

void main ()
{
  int sayi, sayiKlon, uzunluk, controller=0, sayac=1, basamak;
  
  printf("Bir sayi yaz: ");
  scanf("%d", &sayi);
  
  sayiKlon = sayi;
  
  uzunluk = (int)log10(sayi)+1;
  
  for (sayac; sayac<=uzunluk; sayac++) {
      basamak=sayi%10;
      controller+=pow(basamak, uzunluk);
      sayi=sayi/10;
  }
  
  if (sayiKlon==controller) {
      printf("\n\nArmstrong sayisidir");
  }
  else {
      printf("\n\nArmstrong sayisi degildir");
      
  }
}