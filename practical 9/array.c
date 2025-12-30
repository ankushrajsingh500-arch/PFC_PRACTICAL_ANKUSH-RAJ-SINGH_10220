#include <stdio.h>

int main() {
    int arr[10], n;
    int max, min, sumEven = 0, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    max = min = arr[0];
    for(int i = 0; i < n; i++) {
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
        if(arr[i] % 2 == 0)
            sumEven += arr[i];
    }
    for(int i = 0; i < n / 2; i++) {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    printf("\nReversed Array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nMaximum element: %d", max);
    printf("\nMinimum element: %d", min);
    printf("\nSum of even elements: %d", sumEven);

    return 0;
}
//output
//enter number og element:5
//enter array elements:
//1 2 3 4 5
//reversed array:5 4 3 2 1
//max element: 5
//min element:1
//sum of even element:6