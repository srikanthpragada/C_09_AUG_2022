#include <stdio.h>

void main()
{
  char name[] = "Programming";
  int i;

     /*
     for(i = 0; name[i] != '\0' ; i ++)
           ;
     */

     for(i = strlen(name) - 1 ; i >= 0; i --)
           putch(name[i]);

}
