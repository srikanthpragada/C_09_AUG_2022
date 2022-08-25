// Largest of 5 numbers

#include <stdio.h>

void main()
{
  int n, i, smallest;

      for (i = 1; i <= 5; i ++)
      {
         printf("Enter a number : ");
         scanf("%d",&n);

         if (i == 1)
            smallest = n;
         else
           if (n < smallest)
             smallest = n;
      }

      printf("Smallest = %d", smallest);

}
