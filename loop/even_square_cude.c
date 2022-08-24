#include <stdio.h>

void main()
{
  int i;


      for(i = 2; i <= 25; i += 2)
      {
         printf("%2d  %4d %5d\n", i, i * i, i * i * i);
      }
}
