#include <stdio.h>

void main()
{
  char names[5][30]; // An array of strings
  int i;

      for(i = 0; i < 5 ; i ++)
      {
         printf("Enter name :");
         gets(names[i]);
      }

      for(i = 0; i < 5; i ++)
        puts( strupr(names[i]));
}
