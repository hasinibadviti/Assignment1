#include <stdio.h>

#define MAX 100

int binsearch(int arr[], int low, int high, int key) {
    if (low > high)
        return -1; // not found

    int mid = (low + high) / 2;

    if (arr[mid] == key)
        return mid; // found
    else if (arr[mid] < key)
        return binsearch(arr, mid + 1, high, key); // search right half
    else
        return binsearch(arr, low, mid - 1, key); // search left half
}

int main() {
    int a[MAX], n, key, result;

    printf("Enter number of elements (sorted): ");
    scanf("%d", &n);

    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    result = binsearch(a, 0, n - 1, key);

    if (result != -1)
        printf("Element found at position %d\n", result + 1);
    else
        printf("Element not found\n");

    return 0;
}
