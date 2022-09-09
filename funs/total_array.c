#include <stdio.h>

int total_array(int a[5])
{
  int i, total = 0;

     for(i = 0; i < 5; i ++)
          total += a[i];

     return total;
}

void main()
{
  int a[] = {1,2,3,4,5};

      printf("Total of a = %d", total_array(a));
}
