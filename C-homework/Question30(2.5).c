#include <stdio.h>

void main ()
{
  int sayac=1, ustSinir, carpim=1;
  
  printf("Ust sinir degeri yazin: ");
  scanf("%d", &ustSinir);
  
  for (sayac; sayac<=ustSinir; sayac++) {
      carpim*=sayac;
  }
  
  printf("\n\n0 ile %d is: %d aras�ndaki say�lar�n �arp�m�:", ustSinir, carpim);
}