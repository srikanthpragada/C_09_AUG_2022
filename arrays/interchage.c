void main()
{
 int a[20],i, j, temp;

        srand(time(0));
        printf("\nOriginal Array\n");
        for(i = 0; i <  20; i ++)
        {
            a[i] = rand() % 100;
            printf("%3d", a[i]);
        }

        // swap
        for(i = 0, j = 19; i <  10; i ++, j --)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }

        printf("\nAfter Swapping\n");

        for(i = 0; i <  20; i ++)
        {
            printf("%3d", a[i]);
        }


 }

