#include <stdio.h>
#include <math.h>

int main()
{
    int num, i;
    long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &num);
    if(num >= 0)
        printf("Square Root = %.2f\n", sqrt(num));
    else
        printf("Square Root = Not defined for negative numbers\n");
    printf("Square = %d\n", num * num);
    printf("Cube = %d\n", num * num * num);
    if(num <= 1)
    {
        printf("Prime: Not a Prime number\n");
    }
    else
    {
        int isPrime = 1;
        for(i = 2; i <= num/2; i++)
        {
            if(num % i == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if(isPrime)
            printf("Prime: It is a Prime number\n");
        else
            printf("Prime: Not a Prime number\n");
    }
    if(num < 0)
    {
        printf("Factorial: Not defined for negative numbers\n");
    }
    else
    {
        for(i = 1; i <= num; i++)
        {
            factorial *= i;
        }
        printf("Factorial = %lld\n", factorial);
    }
    if(num > 1)
    {
        int temp = num;
        printf("Prime Factors: ");

        for(i = 2; i <= temp; i++)
        {
            while(temp % i == 0)
            {
                printf("%d ", i);
                temp /= i;
            }
        }
        printf("\n");
    }
    else
    {
        printf("Prime Factors: Not applicable\n");
    }

    return 0;
}