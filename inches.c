// Convert inches to cm and mm
#include <stdio.h>

void main()
{
  int inches, cm, mm;

     inches = 12;
     cm = inches * 2.54;
     mm = cm * 10;

     printf("Inches : %d, CM = %d, MM = %d", inches, cm, mm);
}
