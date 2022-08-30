// Take 8 char and display whether it is a valid password
#include <stdio.h>

void main()
{
 int i, upper, digit, special;
 char ch;

        upper = digit = special = 0;
        printf("Enter Password :");
        for(i = 1; i <= 8; i ++)
        {
            ch = getch();
            putch('*');

            if(isdigit(ch))
                digit = 1;
            else
                if(isupper(ch))
                   upper = 1;
                else
                    if(ch== '_' || ch == '@' || ch == '#')
                        special = 1;
        }

        if(upper && digit && special)
             printf("\nValid Password");
        else
             printf("\nInvalid Password");

 }

