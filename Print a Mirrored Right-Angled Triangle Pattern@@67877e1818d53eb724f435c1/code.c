#include <stdio.h>

int main() {
    int n;

    // Get the number of rows from the user
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Loop through each row
    for (int i = 1; i <= n; i++) {
        // Print spaces first
        for (int j = 1; j <= n - i; j++) {
            printf("  ");
        }
        // Then print stars
        for (int k = 1; k <= i; k++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}