#include <stdio.h>

struct time  {
   int h,m,s;
};

void print_time(struct time t)
{
   printf("%02d:%02d:%02d\n", t.h, t.m, t.s);
}

struct time gettime()
{
  struct time t;

      t.h = rand() % 24;
      t.m = rand() % 60;
      t.s = rand() % 60;

      return t;
}

void main()
{
   struct time times[5];
   int i;

      srand(time(0));
      for(i = 0; i < 5; i ++)
      {
          times[i] = gettime();
          print_time(times[i]);
      }

}
