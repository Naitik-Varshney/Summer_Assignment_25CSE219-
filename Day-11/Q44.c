#include <stdio.h>

long long factorial(int n)
{
    int i;
    long long fact = 1;

    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factorial = %lld", factorial(n));

    return 0;
}