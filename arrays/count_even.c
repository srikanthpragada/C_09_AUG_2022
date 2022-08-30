void main()
{
 int a[10],i, count = 0;

        srand(time(0));
        for(i = 0; i <  10; i ++)
        {
            a[i] = rand() % 100;
            if(a[i] % 2 == 0)
                 count ++;
            printf("%5d", a[i]);
        }

        printf("\nNo. of even numbers = %d", count);
 }

