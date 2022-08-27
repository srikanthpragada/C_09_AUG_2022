#include <stdio.h>
#include <conio.h>

void main()
{
  char ch;

         printf("Enter char :");
         ch = getch();

         if(ch >= 65 && ch <= 90)
              printf("Uppercase");
         else
              printf("Lowercase");

}
