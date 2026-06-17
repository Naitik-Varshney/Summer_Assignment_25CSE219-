#include <stdio.h>
#include <math.h>

int main() {
    int num, original, digit, digits = 0;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (original != 0) {
        digits++;
        original /= 10;
    }

    original = num;

    while (original != 0) {
        digit = original % 10;
        sum += pow(digit, digits);
        original /= 10;
    }

    if (sum == num)
        printf("%d is an Armstrong Number.", num);
    else
        printf("%d is Not an Armstrong Number.", num);

    return 0;
}