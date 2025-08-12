#include <stdio.h>
#define MAX 5

int linsearch(int arr[], int s, int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == s)
            return i; // found
    }
    return -1; // not found
}

int main() {
    int s, x, a[MAX];

    printf("Enter %d elements:\n", MAX);
    for (int i = 0; i < MAX; i++) {
        scanf("%d", &a[i]);
    }

    printf("Give s: ");
    scanf("%d", &s);

    x = linsearch(a, s, MAX);

    if (x != -1) {
        printf("Element %d found at index %d\n", s, x);
    } else {
        printf("Element %d not found in the array\n", s);
    }

    return 0;
}
