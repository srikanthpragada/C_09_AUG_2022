struct product
{
  int id;
  char name[30];
  float price;
};

// Function taking struct as param
void print_product(struct product p) {
     printf("%d %s %f\n", p.id, p.name, p.price);
}

// Function returning struct as return value
struct product max(struct product p1, struct product p2)
{
     if (p1.price > p2.price)
        return p1;
     else
        return p2;
}

void main()
{
  struct product p1;
  struct product p2 = {2, "Apple Watch", 40000};

  struct product products[5];

     products[0].id = 101;



     p1.id = 1;
     strcpy(p1.name,"iPhone 14");
     p1.price = 80000;

     print_product(p1);
     print_product(p2);
}

