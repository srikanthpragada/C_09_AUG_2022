#include <stdio.h>

void main()
{
  int num;

     printf("Enter number:");
     scanf("%d", &num);

     if(num % 2 == 0  && num % 3 == 0)
          printf("Both");
     else
        if(num % 2 == 0)
           printf("By 2");
        else
          if(num % 3 == 0)
             printf("By 3");
         else
             printf("None");

}
