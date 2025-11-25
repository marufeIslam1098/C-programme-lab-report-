#include <stdio.h>

int main() {
    for (int m = 1; m <= 12; m++)
        for (int d = 1; d <= 31; d++)
            printf("%02d-%02d\n", d, m);
    return 0;
}
