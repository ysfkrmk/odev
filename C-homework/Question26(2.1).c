#include <stdio.h>

void main ()
{
  int kisaKenar, uzunKenar;
  printf ("Kare veya dikdortgenin kisa kenarinin uzunlugunu yaziniz\n> ");
  scanf ("%d", &kisaKenar);
  printf ("\n\nKare veya dikdortgenin uzun kenarinin uzunlugunu yaziniz\n> ");
  scanf ("%d", &uzunKenar);
  printf ("\n\nAlan: %d\nCevre: %d", (kisaKenar * uzunKenar), (2 * (kisaKenar + uzunKenar)));
}