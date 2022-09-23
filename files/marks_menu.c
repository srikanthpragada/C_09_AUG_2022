// read marks from marks.dat

#include <stdio.h>
#define  FILENAME "marks.dat"

void find_marks()
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

void list_marks()
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
      printf("\n");
}


void average_marks()
{
   FILE * fp;
   int i, count_marks = 0, count, marks, total = 0;

      fp = fopen(FILENAME, "rb");
      while(1)
      {
          count = fread(&marks, sizeof(marks), 1, fp);
          if (count == 0) // EOF
             break;
          total += marks;
          count_marks ++;
      }

      fclose(fp);
      printf("Average = %d\n\n", total / count_marks);
}

void highest_marks()
{

}

void main()
{
  int choice;

     while(1)
     {
         printf("\nMarks Menu\n");
         printf("===========\n\n");
         printf("1. List Marks\n");
         printf("2. Find Marks by rollno\n");
         printf("3. Average Marks\n");
         printf("4. Highest Marks\n");
         printf("5. Exit\n\n");
         printf("Enter choice [1-5] : ");
         scanf("%d",&choice);

         switch(choice)
         {
             case 1 : list_marks(); break;
             case 2 : find_marks(); break;
             case 3 : average_marks(); break;
             case 4 : highest_marks(); break;
             case 5 : return;
         } // switch

     } // while
} // main()
