/* 117: Decimal to Binary conversion */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    unsigned long n;
    printf("Enter a non-negative integer: ");
    if (scanf("%lu", &n)!=1) return 0;
    if (n == 0) {
        printf("Binary: 0\n");
        return 0;
    }
    char buf[sizeof(unsigned long)*8 + 1];
    buf[0] = '\0';
    while (n > 0) {
        char bit = (n % 2) ? '1' : '0';
        // prepend
        size_t len = strlen(buf);
        memmove(buf+1, buf, len+1);
        buf[0] = bit;
        n /= 2;
    }
    printf("Binary: %s\n", buf);
    return 0;
}
