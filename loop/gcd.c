// GCD
#include <stdio.h>

void main()
{
  int num1, num2, gcd, small, i;

        printf("Enter two numbers :");
        scanf("%d%d", &num1, &num2);

        if (num1 % num2 == 0)
            gcd = num2;
        else
            if(num2 % num1 == 0)
               gcd = num1;
            else
            {
              small = num1 < num2 ? num1 : num2;

              for(i = small/2 ; i > 0 ; i --)
              {
                if (num1 % i == 0 && num2 % i == 0)
                {
                  gcd = i;
                  break;
                } // if
             }// for
           }

      printf("GCD = %d", gcd);
 }

