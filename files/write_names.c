#include <stdio.h>


void main()
{
   FILE * fp;
   char name[20];

   fp = fopen("names.txt","at");

   while(1)
   {
      printf("Enter name [end to stop] :");
      gets(name);
      if (stricmp(name, "end") == 0)
         break;

      fprintf(fp, "%s\n",name);
   }

   fclose(fp);
}
