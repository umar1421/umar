#include <stdio.h>

int sumArray(int arr[], int n);

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Sum of array elements: %d\n", sumArray(arr, n));

    return 0;
}

int sumArray(int arr[], int n) {
    if (n <= 0)
        return 0;
    return arr[n - 1] + sumArray(arr, n - 1);
}
