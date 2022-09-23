// read marks from marks.dat

#include <stdio.h>
#define  FILENAME "marks.dat"

void main()
{
   FILE * fp;
   int i, pos, count, marks, rollno;

      fp = fopen(FILENAME, "rb");
      while(1)
      {
          printf("Enter rollno [0 to stop]:");
          scanf("%d", &rollno);

          if (rollno == 0)
              break;

          pos = (rollno - 1) * sizeof(marks);

          fseek(fp, pos, SEEK_SET);  // move file pointer to given position

          count = fread(&marks, sizeof(marks), 1, fp);
          if (count == 0)
             printf("Sorry! Invalid roll number!\n");
          else
             printf("Marks = %d\n", marks);
      }

      fclose(fp);
}
