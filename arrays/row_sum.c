void main()
{
 int a[5][5];
 int i,j, sum;

        srand(time(0));
        for(i = 0; i < 5; i ++)
        {
          sum = 0;
          for(j = 0; j < 5; j ++)
          {
               a[i][j] = rand() % 10;
               printf("%5d", a[i][j]);
               sum += a[i][j];
          }
          printf("%5d\n", sum);
        }

 }

