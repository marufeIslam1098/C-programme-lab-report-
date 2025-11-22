/* 118: Binary to Decimal conversion */
#include <stdio.h>
#include <stdlib.h>
int main() {
    char s[128];
    printf("Enter a binary number (e.g. 10101): ");
    if (scanf("%127s", s)!=1) return 0;
    char *end;
    long val = strtol(s, &end, 2); // base 2
    if (end == s) {
        printf("Invalid binary\n");
    } else {
        printf("Decimal: %ld\n", val);
    }
    return 0;
}
