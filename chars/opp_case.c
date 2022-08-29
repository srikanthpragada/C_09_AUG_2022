// Convert to opp case
#include <stdio.h>
#include <ctype.h>

void main()
{
 char ch;

        printf("Enter char : ");
        ch = getchar();

        if(isupper(ch))
             putchar(ch + 32);  // upper to lower
        else
             putchar(ch - 32);  // lower to upper

 }

