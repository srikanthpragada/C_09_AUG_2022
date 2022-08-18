// Calculate net amount

#include <stdio.h>

void main()
{
  int qty, price, discount, amount, net_amount;

     printf("Enter price :");
     scanf("%d", &price);

     printf("Enter quantity :");
     scanf("%d", &qty);

     amount = qty * price;
     discount = amount * 0.20;
     net_amount = amount - discount;

     printf("Amount       %6d\n", amount);
     printf("- Discount   %6d\n", discount);
     printf("Net Amount   %6d\n", net_amount);

}
