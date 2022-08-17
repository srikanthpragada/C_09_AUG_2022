// Convert inches to cm and mm
#include <stdio.h>

void main()
{
  float inches, cm, mm;

     printf("Enter inches :");
     scanf("%f", &inches);

     cm = inches * 2.54;
     mm = cm * 10;

     printf("Inches : %f, CM = %f, MM = %f", inches, cm, mm);
}
