#include <stdio.h>

int main() {
    int n;
    printf("Enter n for n x n matrix: ");
    scanf("%d", &n);

    int a[n][n];
    printf("Enter matrix:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d", &a[i][j]);

    int sum = 0;
    for(int i=0;i<n;i++) {
        sum += a[i][i];                 // main diagonal
        if(i != n-1-i)
            sum += a[i][n-1-i];         // secondary diagonal
    }

    printf("Sum of diagonals = %d\n", sum);

    return 0;
}
