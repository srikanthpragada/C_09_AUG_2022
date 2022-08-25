// print number in reverse

#include <stdio.h>

void main()
{
  int n;

         printf("Enter a number : ");
         scanf("%d",&n);

         while(n > 0)
         {
             printf("%d", n % 10);   // take rightmost digit
             n = n / 10;             // remove rightmost digit
         }
}
