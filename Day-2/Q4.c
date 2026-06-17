#include <stdio.h>

int main() {
    int n, original, digit, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while(n != 0) {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    if(original == reverse)
        printf("%d is a Palindrome Number.", original);
    else
        printf("%d is Not a Palindrome Number.", original);

    return 0;
}