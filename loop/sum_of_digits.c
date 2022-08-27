// Sum of digits for 5 numbers
#include <stdio.h>

void main()
{
  int num, digit, sum = 0, i;

        for(i = 1; i <= 5; i ++)
        {
           printf("Enter a number :");
           scanf("%d", &num);

           while(num > 0)
           {
            digit = num % 10;  // take rightmost digit
            sum += digit;
            num = num / 10; // remove rightmost digit
           }
        }

        printf("Sum = %d", sum);
}
