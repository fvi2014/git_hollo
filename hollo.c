
#include <stdio.h>

int main (void)
{

  //puts ("Vvedite temperaturu");

  float c, f, k;
  scanf ("%f", &c);
  printf ("tconvert%10.2f%s\n", c, " C");
  f = c*9/5+32;
  k = c + 273.15; 
  printf ("%10.2f%s\n", f, " F");
  printf ( " % 10.2f%s\n " , k, " K" );

  return 0;
}