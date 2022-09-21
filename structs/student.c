#include <stdio.h>
// constants
#define PYTHONFEE 12000
#define JAVAFEE 15000

struct student  {
    char name[20];
    int course, feepaid;
};

typedef struct student STUDENT;

char * getname(int course)
{
    return course == 1 ? "Python" : "Java";
}

int getdue(STUDENT s)
{
    return s.course == 1 ? PYTHONFEE - s.feepaid : JAVAFEE - s.feepaid;
}

void print_student(STUDENT s)
{
    printf("Name       : %s\n", s.name);
    printf("Course     : %s\n", getname(s.course));
    printf("Fee paid   : %d\n", s.feepaid);
    printf("Due Amount : %d\n", getdue(s));
}

void main()
{
   STUDENT s1 = {"Jason", 1, 4000};
   STUDENT s2 = {"Larry", 2, 8000};

   print_student(s1);
   print_student(s2);

}
