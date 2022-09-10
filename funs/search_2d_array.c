#include <stdio.h>

int search_2d_array(int a[3][5], int v)
{
  int i, j;

     for(i = 0; i < 5; i ++)
     {
       for(j = 0; j < 5; j ++)
       {
         if(a[i][j] == v)
           return 1; // found so return true
       }
     }
     return 0; // Not found
}

void main()
{
  int a[3][5] = {{1,2,3,4,5},{2,3,4,5,6}, {10,20,30,40,50}};
  int pos;

       pos = search_2d_array(a,10);
       if(pos)
           printf("Found");
       else
           printf("Not found");
}
