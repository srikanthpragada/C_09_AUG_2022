#include <stdio.h>

void print_array(int a[10])
{
  int i;

     for(i = 0; i < 10; i ++)
        printf("%d\n", a[i]);
}

void main()
{
  int a[10], b[10];

     print_array(a);
     printf("\n\n");
     print_array(b);
}
