#include <stdio.h>

int main() {
    int r, c;
    printf("Enter rows & cols: ");
    scanf("%d %d", &r, &c);

    int a[r][c];
    printf("Enter matrix:\n");
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    for(int i=0;i<r;i++){
        int t = a[i][0];
        a[i][0] = a[i][c-1];
        a[i][c-1] = t;
    }

    printf("After swapping first & last element of each row:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    return 0;
}
