#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int q = a / b;
    int r = a % b;

    printf("Quotient = %d, Remainder = %d\n", q, r);
    return 0;
}
