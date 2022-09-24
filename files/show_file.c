#include <stdio.h>

void main(int argc, char * argv[])
{
   FILE * fp;
   int ch;

   if(argc < 2)
   {
       printf("Sorry! Filename is missing!");
       return;
   }

   fp = fopen(argv[1],"rt");
   if(fp == NULL)
   {
       printf("Sorry! File [%s] not found!", argv[1]);
       return;
   }

   while(1)
   {
       ch = fgetc(fp);
       if (ch == EOF)  // reached end of file
         break;

       putch(ch);
   }

   fclose(fp);
}
