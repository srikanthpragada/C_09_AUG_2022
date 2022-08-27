// print all prime between 1 to 100
#include <stdio.h>

void main()
{
  int n, i, prime;

        for(n = 100; n <= 200; n ++)
        {
           prime = 1;
           for(i=2; i <= n/2; i ++)
           {
               if(n % i == 0)
               {
                 prime = 0;
                 break;
               }
           }
           if(prime == 1)
              printf("%d ", n);
        }
}
