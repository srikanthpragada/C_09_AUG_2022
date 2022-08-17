// Take inches from user and convert inches to cm and mm
#include <stdio.h>

void main()
{
  int inches, cm, mm;

     // input
     printf("Enter Inches :");
     scanf("%d", &inches);

     // Process
     cm = inches * 2.54;
     mm = cm * 10;

     // output
     printf("Inches : %d, CM = %d, MM = %d", inches, cm, mm);
}
