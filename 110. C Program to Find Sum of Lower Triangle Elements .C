#include <stdio.h>

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d",&n);

    int a[n][n], sum = 0;

    printf("Enter matrix:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    for(int i=0;i<n;i++)
        for(int j=0;j<=i;j++)
            sum += a[i][j];

    printf("Sum of lower triangle = %d\n", sum);

    return 0;
}
