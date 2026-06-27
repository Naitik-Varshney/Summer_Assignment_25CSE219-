#include <stdio.h>

int main() {
    int a[10][10];
    int rows, cols, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d%d",&rows,&cols);

    printf("Enter matrix elements:\n");
    for(i=0;i<rows;i++)
        for(j=0;j<cols;j++)
            scanf("%d",&a[i][j]);

    printf("Transpose Matrix:\n");
    for(i=0;i<cols;i++) {
        for(j=0;j<rows;j++)
            printf("%d ",a[j][i]);
        printf("\n");
    }

    return 0;
}