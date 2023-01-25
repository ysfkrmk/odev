#include <stdio.h>

void main ()
{
  int sayac=0, ustSinir, toplam=0;
  
  printf("Ust sinir degeri yazin: ");
  scanf("%d", &ustSinir);
  
  for (sayac; sayac<ustSinir; sayac++) {
      toplam+=sayac;
  }
  
  printf("\n\n0 ile %d arasindaki sayilarin toplami: %d", ustSinir, toplam);
}