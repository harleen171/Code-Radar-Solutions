#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Read number of elements
    
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Read array elements
    }
    
    int isSorted = 1; // Assume it's sorted
    for(int i = 0; i < n - 1; i++) {
        if(arr[i] > arr[i + 1]) {
            isSorted = 0; // Found out-of-order pair
            break;
        }
    }
    
    if(isSorted) {
        printf("Sorted\n");
    } else {
        printf("Not Sorted\n");
    }

    return 0;
}
