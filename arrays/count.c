void main()
{
 int a[10] = {10,40,30,40,20,90,50,40,30,55},num, count = 0, i;


        printf("Enter a number : ");
        scanf("%d", &num);

        for(i = 0; i <  10; i ++)
        {
           if(a[i] == num)
             count ++;
        }

        printf("Count = %d", count);



 }

