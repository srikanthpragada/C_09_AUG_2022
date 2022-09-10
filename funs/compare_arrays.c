#include <stdio.h>

int equal_arrays(int a[5], int b[5])
{
  int i;

     for(i = 0; i < 5; i ++)
     {
        if(a[i] != b[i])
          return 0;  // false
     }

     return 1; // true
}

void main()
{
  int a[]= {1,2,6,4,5};
  int b[]= {1,2,3,4,5};

    printf("%d ", equal_arrays(a,b));
}
