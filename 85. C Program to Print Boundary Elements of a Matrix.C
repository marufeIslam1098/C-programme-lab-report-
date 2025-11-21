#include <stdio.h>

int main() {
    int r, c;
    printf("Enter rows & columns: ");
    scanf("%d %d", &r, &c);

    int a[r][c];
    printf("Enter matrix:\n");
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d", &a[i][j]);

    printf("Boundary Elements:\n");

    // Top row
    for(int j=0;j<c;j++)
        printf("%d ", a[0][j]);

    // Right column
    for(int i=1;i<r-1;i++)
        printf("%d ", a[i][c-1]);

    // Bottom row
    if(r > 1)
        for(int j=c-1;j>=0;j--)
            printf("%d ", a[r-1][j]);

    // Left column
    for(int i=r-2;i>0;i--)
        printf("%d ", a[i][0]);

    return 0;
}
