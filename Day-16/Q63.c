#include <stdio.h>

int main() {
    int n, i, j, sum, found = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter required sum: ");
    scanf("%d", &sum);

    printf("Pairs are:\n");

    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == sum) {
                printf("%d + %d = %d\n", arr[i], arr[j], sum);
                found = 1;
            }
        }
    }

    if(!found)
        printf("No pair found.");

    return 0;
}