
#include <stdio.h>

void main()
{
   char st1[50], st2[50];


      printf("Enter string:");
      gets(st1);

      // st2 = st1;
      strcpy(st2, st1);

      puts(st2);
}
