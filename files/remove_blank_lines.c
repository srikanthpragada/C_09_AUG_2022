#include <stdio.h>

void main()
{
   FILE * sfp, * tfp;
   char sfn[50], tfn[50], line[100];
   char * p;
   int ch;

   printf("Enter source filename :");
   gets(sfn);

   printf("Enter target filename :");
   gets(tfn);

   sfp = fopen(sfn,"rt");
   if(sfp == NULL)  // file not found
   {
       printf("Sorry! File %s not found!", sfn);
       return;
   }

   tfp = fopen(tfn,"wt");
   if(tfp == NULL)  // file not created
   {
       printf("Sorry! File %s cannot be created!", tfn);
       return;
   }

   while(1)
   {
       p =  fgets(line, 100, sfp);
       if(p == NULL)  // EOF
          break;

       if (strlen(line) > 1)  // Write non-blank line
          fputs(line, tfp);
   }

   fclose(sfp);
   fclose(tfp);
}
