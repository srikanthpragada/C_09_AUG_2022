#include <stdio.h>

void main()
{
  char num [] = "456", s[10];
  int n = 135;

      itoa(n, s, 10);  // int to str
      puts(s);
      n  = atoi(num);  // str to int
      printf("%d", n);
}
