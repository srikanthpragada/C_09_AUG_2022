#include <stdio.h>

int search_array(int a[5], int v)
{
  int i;

     for(i = 0; i < 5; i ++)
     {
         if(a[i] == v)
           return i; // found
     }

     return -1; // Not found
}

void main()
{
  int a[] = {1,2,3,4,5};
  int pos;

       pos = search_array(a,1);
       if(pos >= 0)
           printf("Found  = %d", pos);
       else
           printf("Not found");
}
