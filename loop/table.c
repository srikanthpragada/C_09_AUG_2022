#include <stdio.h>

void main()
{
  int n, i;

      printf("Enter number :");
      scanf("%d", &n);

      for(i = 1; i <= 20; i ++)
      {
         printf("%3d  * %2d = %5d\n", n, i, n * i);
      }
}
