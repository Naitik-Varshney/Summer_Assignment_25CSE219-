#include <stdio.h>

int palindrome(int n)
{
    int rev = 0, temp = n;

    while (temp > 0)
    {
        rev = rev * 10 + temp % 10;
        temp = temp / 10;
    }

    if (rev == n)
        return 1;
    else
        return 0;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (palindrome(num))
        printf("%d is a Palindrome Number.", num);
    else
        printf("%d is not a Palindrome Number.", num);

    return 0;
}