

void print_array(int * a, int len)
{
int i;
   for(i = 0 ; i < len; i ++)
      printf("%d ", a[i]);
}

void main()
{
  int a1[10], a2[5];

       print_array(a1, 5);
       printf("\n");
       print_array(a2, 5);
}
