#include <stdio.h>
#include <math.h>

int main() {
    int start, end, num, original, digit, digits, sum;

    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    printf("Armstrong numbers are:\n");

    for (num = start; num <= end; num++) {

        original = num;
        digits = 0;
        sum = 0;

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
            printf("%d ", num);
    }

    return 0;
}