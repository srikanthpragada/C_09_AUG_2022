// write marks to marks.dat

#include <stdio.h>
#define  FILENAME "marks.dat"

void main()
{
   FILE * fp;
   int i, marks;

      fp = fopen("marks.dat", "wb");

      srand(time(0));
      for(i = 1; i <= 20; i ++)
      {
          marks = rand() % 100;
          fwrite(&marks, sizeof(marks), 1, fp);
      }

      fclose(fp);
}
