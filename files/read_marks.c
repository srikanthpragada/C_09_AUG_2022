// read marks from marks.dat

#include <stdio.h>
#define  FILENAME "marks.dat"

void main()
{
   FILE * fp;
   int i, count, marks;

      fp = fopen(FILENAME, "rb");
      while(1)
      {
          count = fread(&marks, sizeof(marks), 1, fp);
          if (count == 0) // EOF
             break;

          printf("%d ", marks);
      }

      fclose(fp);
}
