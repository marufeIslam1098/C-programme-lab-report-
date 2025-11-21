#include <stdio.h>

int main() {
    int n, trace = 0;
    printf("Enter size: ");
    scanf("%d",&n);

    int a[n][n];
    printf("Enter matrix:\n");

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    for(int i=0;i<n;i++)
        trace += a[i][i];

    printf("Trace = %d\n", trace);

    return 0;
}
