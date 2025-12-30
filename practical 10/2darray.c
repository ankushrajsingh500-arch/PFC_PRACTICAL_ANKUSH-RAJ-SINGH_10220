#include <stdio.h>

int main() {
    int arr[10][10];
    int rows, cols;
    int max, min;
    int diagSum = 0;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    printf("Enter elements of the array:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    max = min = arr[0][0];
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(arr[i][j] > max)
                max = arr[i][j];
            if(arr[i][j] < min)
                min = arr[i][j];
            if(i == j)
                diagSum += arr[i][j];
        }
    }
    printf("\nMaximum element: %d", max);
    printf("\nMinimum element: %d", min);
    printf("\nSum of diagonal elements: %d\n", diagSum);
    printf("\nRow-wise sum:\n");
    for(int i = 0; i < rows; i++) {
        int rowSum = 0;

        for(int j = 0; j < cols; j++) {
            rowSum += arr[i][j];
        }

        printf("Sum of row %d = %d\n", i + 1, rowSum);
    }

    return 0;
}
//Output
//
    