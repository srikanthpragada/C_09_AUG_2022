#include <stdio.h>

void main()
{
  int i, n, total = 0;

      for(i = 1; i <= 5; i ++)
      {
         printf("Enter number : ");
         scanf("%d", &n);
         total = total + n;
      }

      printf("Total = %d", total);
}
