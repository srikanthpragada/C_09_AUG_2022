#include <stdio.h>

void main()
{
  char name[30], largest[30];


      strcpy(largest,"");

      while(1)
      {
         printf("Enter name [end to stop] :");
         gets(name);

         if( strcmp(name, "end") == 0)
           break;

         if(strcmp(name, largest) > 0)
             strcpy(largest,name);
      }

      printf("Largest name = %s", largest);

}
