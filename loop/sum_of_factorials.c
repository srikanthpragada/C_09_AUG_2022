// Sum of factorials
#include <stdio.h>

void main()
{
  int num, digit, sum = 0, i, fact;

        printf("Enter a number :");
        scanf("%d", &num);

        while(num > 0)
        {
            digit = num % 10;  // take rightmost digit

            fact = 1;
            for (i = 2; i <= digit ; i ++)
                fact = fact * i;

            sum += fact;
            num = num / 10; // remove rightmost digit
        }

        printf("Sum = %d", sum);
}
