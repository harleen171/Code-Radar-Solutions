#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int arr[] = {5, 2, 9, 1, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    qsort(arr, size, sizeof(int), cmp);

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}