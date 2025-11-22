/* 116: Decimal to Hexadecimal conversion */
#include <stdio.h>
int main() {
    long n;
    printf("Enter a decimal integer: ");
    if (scanf("%ld", &n)!=1) return 0;
    printf("Hexadecimal (lowercase): %lx\n", (unsigned long)n);
    printf("Hexadecimal (uppercase): %lX\n", (unsigned long)n);
    return 0;
}
