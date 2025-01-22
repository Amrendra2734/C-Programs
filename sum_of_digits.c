int main()
{
      int number,j, sum = 0;
        scanf("%d", &number);
            while (number != 0)
    {

                j= number % 10;
               number = number / 10;
               sum=sum+j;
    }

    printf("%d", sum);
    return 0;
}
