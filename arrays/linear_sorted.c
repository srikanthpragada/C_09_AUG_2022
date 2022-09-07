void main()
{
 int a[10] = {10,20,25,30,40,50,80,100,120,150},num, i;
 int found = 0;

        printf("Enter a number : ");
        scanf("%d", &num);

        for(i = 0; i < 10; i ++)
        {
           if(a[i] == num)
           {
               printf("Found at %d", i);
               found = 1;
               break;
           }
           if (a[i] > num)
             break;
        }

        if(found == 0)
            printf("Not found!");
 }

