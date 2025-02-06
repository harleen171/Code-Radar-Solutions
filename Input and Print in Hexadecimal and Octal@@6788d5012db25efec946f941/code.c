#include <stdio.h>

int main() {
    int num;

   
    scanf("%d", &num);

    // Print the hexadecimal and octal representations
    printf("Hexadecimal: %X\n", num);  // %X for uppercase hexadecimal representation
    printf("Octal: %o\n", num);        // %o for octal representation

    return 0;
}