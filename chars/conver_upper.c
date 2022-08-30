// Take 8 char and display whether it is a valid password
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
void main()
{
 int i;
 char ch;

        printf("Enter chars :");
        for(i = 1; i <= 10; i ++)
        {
            ch = getch();
            if(islower(ch))
                ch = toupper(ch);
            putch(ch);
        }
 }

