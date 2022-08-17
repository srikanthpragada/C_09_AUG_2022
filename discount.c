// Take price and calculate discount
#include <stdio.h>

void main()
{
  int price, discount;

     // input
     printf("Enter price :");
     scanf("%d", &price);

     // Process
     discount = price * 15 / 100;    //  discount = price * 0.15;

     // output
     printf("Discount = %d", discount);
}
