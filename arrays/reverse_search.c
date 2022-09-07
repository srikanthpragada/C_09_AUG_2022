void main()
{
 int a[10] = {10,40,30,40,20,90,50,40,30,55},num, i;

        printf("Enter a number : ");
        scanf("%d", &num);

        for(i = 9; i >= 0; i --)
        {
           if(a[i] == num)
           {
               printf("Found at %d", i);
               break;
           }
        }

        if(i < 0)
            printf("Not found!");
 }

