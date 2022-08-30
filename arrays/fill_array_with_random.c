void main()
{
 int a[10],i;

        srand(time(0));
        for(i = 0; i <  10; i ++)
        {
            a[i] = rand() % 100;
            printf("%d\n", a[i]);
        }
 }

