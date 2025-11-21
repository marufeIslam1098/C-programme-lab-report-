#include <stdio.h>

int main() {
    int r, c;
    printf("Enter rows & columns: ");
    scanf("%d %d", &r, &c);

    int a[r][c];

    printf("Enter matrix:\n");
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            if(a[i][j] < 0)
                a[i][j] = 0;

    printf("Matrix after replacing negatives:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    return 0;
}
